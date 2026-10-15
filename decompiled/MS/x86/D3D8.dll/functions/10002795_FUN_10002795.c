/*
 * FUN_10002795 at 10002795
 * undefined4 __thiscall FUN_10002795(void * this, int param_1)
 * Address ranges: 10002795-100027e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10002795(void *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_10023841(param_1,(&DAT_100ba734)[param_1 * 0x8a]);
  if ((char)uVar1 == '\0') {
    uVar1 = uVar1 & 0xffffff00;
  }
  else {
    uVar1 = 0x20;
    if (*(uint *)(&DAT_100ba8b0 + param_1 * 0x228) != 8) {
      uVar1 = *(uint *)(&DAT_100ba8b0 + param_1 * 0x228);
    }
    uVar2 = FUN_10001fe6(this,uVar1);
    *(undefined4 *)(&DAT_100ba1a0 + param_1 * 8) = uVar2;
    uVar1 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar1;
}

