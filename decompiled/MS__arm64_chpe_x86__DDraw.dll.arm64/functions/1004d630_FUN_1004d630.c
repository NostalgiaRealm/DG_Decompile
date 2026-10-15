/*
 * FUN_1004d630 at 1004d630
 * undefined FUN_1004d630(void)
 * Address ranges: 1004d630-1004d743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1004d630(uint param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = false;
  if (((param_1 >> 0xb & 1) != 0) && (param_2 == (int *)0x0)) {
    return false;
  }
  if ((param_1 >> 10 & 1) == 0) {
    if ((param_1 >> 0x19 & 1) != 0) {
      bVar1 = (param_1 & 0x207f400) == 0x2000000;
      bVar2 = (param_1 & 0x207f400) == 0x2000000;
      goto LAB_1004d68c;
    }
    if ((param_1 >> 0x11 & 1) == 0) {
      if (((param_1 & 0x6000) != 0x4000) && ((param_1 & 0x18000) != 0x10000)) {
        if (((param_1 & 0x4000) != 0) && ((param_1 & 0x10000) != 0)) {
          return false;
        }
        return true;
      }
      bVar1 = true;
      bVar3 = param_2 != (int *)0x0;
      goto LAB_1004d728;
    }
    if (param_2 == (int *)0x0) {
      return false;
    }
    if (param_2[2] == 0x42 || param_2[2] == 0xff0062) {
      bVar1 = (param_1 & 0x7f000) == 0x20000;
    }
    else {
      if ((param_1 & 0x6000) != 0x6000) goto LAB_1004d730;
      bVar1 = false;
      if ((param_1 & 0x18000) != 0x18000) {
        bVar1 = true;
      }
    }
  }
  else {
    bVar1 = (param_1 & 0x207f400) == 0x400;
    bVar2 = (param_1 & 0x207f400) == 0x400;
LAB_1004d68c:
    bVar3 = false;
    if (bVar2) {
      bVar3 = param_2 != (int *)0x0;
    }
LAB_1004d728:
    if (bVar3 == false) {
      return false;
    }
  }
  if (!bVar1) {
    return bVar3;
  }
LAB_1004d730:
  return *param_2 == 100;
}

