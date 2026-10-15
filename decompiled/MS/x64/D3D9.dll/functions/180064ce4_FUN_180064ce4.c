/*
 * FUN_180064ce4 at 180064ce4
 * undefined __fastcall FUN_180064ce4(undefined8 param_1, uint * param_2, longlong * param_3, undefined8 param_4, undefined8 param_5)
 * Address ranges: 180064ce4-180064f2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180064ce4(undefined8 param_1,uint *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulonglong)param_5 >> 0x34) & 7;
  if (uVar2 == 0) {
LAB_180064ee5:
    FUN_1800edbe0(param_2,param_3,0x4000d,0xffffffff);
    return;
  }
  if (uVar2 == 7) {
    return;
  }
  uVar1 = FUN_1800ec8c0((longlong)param_2,4,'\0');
  FUN_1800edbe0(param_2,param_3,0x32,(ulonglong)uVar1);
  FUN_1800edbe0(param_2,param_3,0x1c,(ulonglong)uVar1);
  if (uVar2 == 0) goto LAB_180064ee5;
  if (uVar2 == 1) {
    uVar2 = 0x50;
  }
  else if (uVar2 == 2) {
    uVar2 = 0x27;
  }
  else if (uVar2 == 3) {
    uVar2 = 0x4f;
  }
  else if (uVar2 == 4) {
    uVar2 = 0x50;
  }
  else if (uVar2 == 5) {
    uVar2 = 0x20;
  }
  else {
    if (uVar2 != 6) {
      if (uVar2 == 7) {
        return;
      }
      goto LAB_180064eb5;
    }
    uVar2 = 0x4f;
  }
  FUN_1800edbe0(param_2,param_3,uVar2,(ulonglong)uVar1);
LAB_180064eb5:
  FUN_1800edbe0(param_2,param_3,0x4000d,0xffffffff);
  return;
}

