/*
 * FUN_10032079 at 10032079
 * bool __fastcall FUN_10032079(uint param_1, int * param_2)
 * Address ranges: 10032079-10032176
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10032079(uint param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  bVar1 = false;
  bVar4 = false;
  if (((param_1 & 0x800) == 0) || (param_2 != (int *)0x0)) {
    uVar3 = 0x400;
    if (((param_1 & 0x400) == 0) && (uVar3 = 0x2000000, (param_1 & 0x2000000) == 0)) {
      if ((param_1 & 0x20000) == 0) {
        uVar3 = param_1 & 0x6000;
        if ((uVar3 == 0x4000) || (uVar2 = param_1 & 0x18000, uVar2 == 0x10000)) {
          bVar1 = param_2 != (int *)0x0;
          bVar4 = true;
        }
        else if ((((uVar3 == 0x2000) || (uVar3 == 0)) || (uVar2 == 0x8000)) || (uVar2 == 0)) {
          return true;
        }
      }
      else if (param_2 != (int *)0x0) {
        bVar4 = true;
        if ((param_2[2] == 0x42) || (param_2[2] == 0xff0062)) {
          if ((param_1 & 0x7f000) == 0x20000) {
            bVar1 = bVar4;
          }
        }
        else {
          uVar3 = param_1 & 0x6000;
          if (((uVar3 == 0x2000) || (uVar3 == 0x4000)) ||
             ((uVar3 == 0 ||
              (((uVar3 = param_1 & 0x18000, uVar3 == 0x8000 || (uVar3 == 0x10000)) || (uVar3 == 0)))
              ))) goto LAB_1003216e;
        }
      }
    }
    else {
      bVar4 = (param_1 & 0x207f400) == uVar3;
      bVar1 = (param_1 & 0x207f400) == uVar3 && param_2 != (int *)0x0;
    }
  }
  if (bVar1 == false) {
    return false;
  }
  if (bVar4 == false) {
    return bVar1;
  }
LAB_1003216e:
  return *param_2 == 100;
}

