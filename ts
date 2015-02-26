#!/bin/gawk -f
BEGIN {
  switch (ARGC) {
    case 1:
      format = "%c"
      break
    case 2:
      format = ARGV[1]
      break
    default:
      print "Usage: ts [format]"
      exit
  }
  ARGC = 1
}
{ print strftime(format), $0 }
