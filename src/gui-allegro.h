#ifndef __INC_GUI_ALLEGRO_H
#define __INC_GUI_ALLEGRO_H

typedef enum {
    IDM_ZERO,
    IDM_FILE_RESET,
    IDM_FILE_LOAD_STATE,
    IDM_FILE_SAVE_STATE,
    IDM_FILE_SCREEN_SHOT,
    IDM_FILE_PRINT,
    IDM_FILE_M5000,
    IDM_FILE_EXIT,
    IDM_EDIT_PASTE,
    IDM_EDIT_COPY,
    IDM_DISC_AUTOBOOT,
    IDM_DISC_LOAD,
    IDM_DISC_EJECT,
    IDM_DISC_MMB_LOAD,
    IDM_DISC_MMB_EJECT,
    IDM_DISC_NEW_ADFS_S,
    IDM_DISC_NEW_ADFS_M,
    IDM_DISC_NEW_ADFS_L,
    IDM_DISC_NEW_DFS_10S_SIN_40T,
    IDM_DISC_NEW_DFS_10S_INT_40T,
    IDM_DISC_NEW_DFS_10S_SIN_80T,
    IDM_DISC_NEW_DFS_10S_INT_80T,
    IDM_DISC_NEW_DFS_16S_SIN_80T,
    IDM_DISC_NEW_DFS_16S_INT_80T,
    IDM_DISC_NEW_DFS_18S_SIN_80T,
    IDM_DISC_NEW_DFS_18S_INT_80T,
    IDM_DISC_WPROT,
    IDM_DISC_WPROT_D,
    IDM_DISC_HARD_IDE,
    IDM_DISC_HARD_SCSI,
    IDM_DISC_VDFS_ENABLE,
    IDM_DISC_VDFS_ROOT,
    IDM_TAPE_LOAD,
    IDM_TAPE_REWIND,
    IDM_TAPE_EJECT,
    IDM_TAPE_CAT,
    IDM_TAPE_SPEED_NORMAL,
    IDM_TAPE_SPEED_FAST,
    IDM_ROMS_LOAD,
    IDM_ROMS_CLEAR,
    IDM_ROMS_RAM,
    IDM_MODEL,
    IDM_TUBE,
    IDM_TUBE_SPEED,
    IDM_VIDEO_LINEDBL,
    IDM_VIDEO_SCANLINES,
    IDM_VIDEO_INTERLACED,
    IDM_VIDEO_PAL,
    IDM_VIDEO_BORDERS,
    IDM_VIDEO_FULLSCR,
    IDM_VIDEO_NULA,
    IDM_SOUND_INTERNAL,
    IDM_SOUND_BEEBSID,
    IDM_SOUND_MUSIC5000,
    IDM_SOUND_DAC,
    IDM_SOUND_DDNOISE,
    IDM_SOUND_TAPE,
    IDM_SOUND_FILTER,
    IDM_WAVE,
    IDM_SID_TYPE,
    IDM_SID_METHOD,
    IDM_DISC_TYPE,
    IDM_DISC_VOL,
#ifdef HAVE_JACK_JACK_H
    IDM_MIDI_M4000_JACK,
    IDM_MIDI_M2000_OUT2_JACK,
    IDM_MIDI_M2000_OUT1_JACK,
    IDM_MIDI_M2000_OUT3_JACK,
#endif
#ifdef HAVE_ALSA_ASOUNDLIB_H
    IDM_MIDI_M4000_ASEQ,
    IDM_MIDI_M4000_ARAW,
    IDM_MIDI_M2000_OUT1_ASEQ,
    IDM_MIDI_M2000_OUT1_ARAW,
    IDM_MIDI_M2000_OUT2_ASEQ,
    IDM_MIDI_M2000_OUT2_ARAW,
    IDM_MIDI_M2000_OUT3_ASEQ,
    IDM_MIDI_M2000_OUT3_ARAW,
#endif
    IDM_KEY_REDEFINE,
    IDM_KEY_AS,
    IDM_MOUSE_AMX,
    IDM_JOYMAP,
    IDM_SPEED,
    IDM_DEBUGGER,
    IDM_DEBUG_TUBE,
    IDM_DEBUG_BREAK
} menu_id_t;

extern void gui_allegro_init(ALLEGRO_EVENT_QUEUE *queue, ALLEGRO_DISPLAY *display);
extern void gui_allegro_event(ALLEGRO_EVENT *event);
extern void gui_allegro_set_eject_text(int drive, ALLEGRO_PATH *path);

#endif
