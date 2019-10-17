// Copyright (C) 2004 Id Software, Inc.
//

#ifndef __GAME_CAMERA_H__
#define __GAME_CAMERA_H__


/*
===============================================================================

Camera providing an alternative view of the level.

===============================================================================
*/

class idCamera : public idEntity {
public:
	ABSTRACT_PROTOTYPE( idCamera );

  // Nicemice: New network events
  enum {
    EVENT_CAMERA_SETCAMERA = idEntity::EVENT_MAXEVENTS,
    EVENT_CAMERA_RESETCAMERA,
    EVENT_MAXEVENTS
	};

  // Nicemice: added
  idCamera();
  ~idCamera();

	void					Spawn( void );
	virtual void			GetViewParms( renderView_t *view ) = 0;
	virtual renderView_t *	GetRenderView();
	virtual void			Stop( void ){} ;
  // Nicemice: added
  void Event_SetCamera();
  void Event_ResetCamera();
  virtual bool ClientReceiveEvent( int event, int time, const idBitMsg &msg );

};

/*
===============================================================================

idCameraView

===============================================================================
*/

class idCameraView : public idCamera {
public:
	CLASS_PROTOTYPE( idCameraView );
							idCameraView();

	// save games
	void					Save( idSaveGame *savefile ) const;				// archives object for save game file
	void					Restore( idRestoreGame *savefile );				// unarchives object from save game file

	void					Spawn( );
	virtual void			GetViewParms( renderView_t *view );
	virtual void			Stop( void );

protected:
	void					Event_Activate( idEntity *activator );
	void					Event_SetAttachments();
	void					SetAttachment( idEntity **e, const char *p );
	float					fov;
	idEntity				*attachedTo;
	idEntity				*attachedView;
};



/*
===============================================================================

A camera which follows a path defined by an animation.

===============================================================================
*/

typedef struct {
	idCQuat				q;
	idVec3				t;
	float				fov;
} cameraFrame_t;

class idCameraAnim : public idCamera {
public:
	CLASS_PROTOTYPE( idCameraAnim );

							idCameraAnim();
							~idCameraAnim();

	// save games
	void					Save( idSaveGame *savefile ) const;				// archives object for save game file
	void					Restore( idRestoreGame *savefile );				// unarchives object from save game file

	void					Spawn( void );
	virtual void			GetViewParms( renderView_t *view );

private:
	int						threadNum;
	idVec3					offset;
	int						frameRate;
	int						starttime;
	int						cycle;
	idList<int>				cameraCuts;
	idList<cameraFrame_t>	camera;
	idEntityPtr<idEntity>	activator;

	void					Start( void );
	void					Stop( void );
	void					Think( void );

	void					LoadAnim( void );
	void					Event_Start( void );
	void					Event_Stop( void );
	void					Event_SetCallback( void );
	void					Event_Activate( idEntity *activator );
};

#endif /* !__GAME_CAMERA_H__ */
