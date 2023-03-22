#include "termtc.h"


void tc_reset( void )
{
    printf( "\e[0m" );
    return;
}

void tc_fore( uint8_t r, uint8_t g, uint8_t b )
{
    printf( "\e[38;2;%d;%d;%dm", r, g, b );
    return;
}

void tc_back( uint8_t r, uint8_t g, uint8_t b )
{
    printf( "\e[48;2;%d;%d;%dm", r, g, b );
    return;
}

void tc_cursor_up( uint16_t num )
{
    printf( "\e[%dA", num );
    return;
}

void tc_cursor_down( uint16_t num )
{
    printf( "\e[%dB", num );
    return;
}

void tc_cursor_right( uint16_t num )
{
    printf( "\e[%dC", num );
    return;
}

void tc_cursor_left( uint16_t num )
{
    printf( "\e[%dD", num );
    return;
}

void tc_cursor_mv( int16_t x, int16_t y )
{
    if ( x == 0 );
    else if ( x > 0 )
    {
        tc_cursor_right( x );
    }
    else
    {
        tc_cursor_left( 0-x );
    }

    if ( y == 0 );
    else if ( y > 0 )
    {
        tc_cursor_down( x );
    }
    else
    {
        tc_cursor_up( 0-x );
    }

    return;
}

void tc_bold( void )
{
    printf( "\e[1m" );
    return;
}

void tc_italic( void )
{
    printf( "\e[3m" );
    return;
}

void tc_underline( void )
{
    printf( "\e[4m" );
    return;
}
