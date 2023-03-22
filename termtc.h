#ifndef __TERMTC_H__
#define __TERMTC_H__

#include <stdio.h>
#include <stdint.h>


void tc_reset( void );
void tc_fore( uint8_t r, uint8_t g, uint8_t b );
void tc_back( uint8_t r, uint8_t g, uint8_t b );
void tc_cursor_up( uint16_t num );
void tc_cursor_down( uint16_t num );
void tc_cursor_right( uint16_t num );
void tc_cursor_left( uint16_t num );
void tc_cursor_mv( int16_t x, int16_t y );
void tc_bold( void );
void tc_italic( void );
void tc_underline( void );



#endif  // __TERMTC_H__