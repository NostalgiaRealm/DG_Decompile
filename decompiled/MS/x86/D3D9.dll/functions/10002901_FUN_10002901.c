/*
 * FUN_10002901 at 10002901
 * undefined4 __thiscall FUN_10002901(void * this, int param_1)
 * Address ranges: 10002901-10002955
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10002901(void *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1002ae75(param_1,(&DAT_100df2fc)[param_1 * 0x8a]);
  if ((char)uVar1 == '\0') {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = 0x20;
    if (*(uint *)(&DAT_100df478 + param_1 * 0x228) != 8) {
      uVar1 = *(uint *)(&DAT_100df478 + param_1 * 0x228);
    }
    uVar2 = FUN_10001ed6(this,uVar1);
    *(undefined4 *)(&DAT_100deed8 + param_1 * 0x20) = uVar2;
    uVar1 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1;
}

