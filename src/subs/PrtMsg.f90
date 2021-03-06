#include "util.fh"
!
!	prtmsg.f90
!	new_quick
!
!	Created by Madu Manathunga on 03/25/2020.
!	Copyright 2020 Michigan State University. All rights reserved.
!

!-----------------------------------------------------------
! PrtMsg
!-----------------------------------------------------------
! Print a message to user. Eg. a solution to an error.
!-----------------------------------------------------------

subroutine PrtMsg(io,line)
  implicit none
  integer io,L,leng,i
  character line*(*)

  leng=len(line)
  L=0
  write(io,'(" ",a)') line
  write(io,'(a)')
  call flush(io)
  return
end subroutine PrtMsg
