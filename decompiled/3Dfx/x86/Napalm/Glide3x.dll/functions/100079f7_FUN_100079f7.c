/*
 * FUN_100079f7 at 100079f7
 * undefined __thiscall FUN_100079f7(void * this, int param_1, int param_2, undefined4 param_3, char param_4)
 * Address ranges: 100079f7-10007a71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100079f7(void *this,int param_1,int param_2,undefined4 param_3,char param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = (&DAT_1005895c)[param_2];
  uVar3 = (uint)*(ushort *)(&DAT_10058930 + param_2 * 2);
  *(undefined4 *)((int)this + param_2 * 0x10) = param_3;
  *(uint *)((int)this + param_2 * 0x10 + 0xc) = param_1 + (uint)bVar1 * 4;
  uVar2 = *(uint *)((int)this + 0xe0);
  if (param_4 == '\0') {
    if ((uVar2 & uVar3) == 0) {
      return;
    }
    *(int *)((int)this + 0xe8) =
         *(int *)((int)this + 0xe8) + *(int *)((int)this + param_2 * 0x10 + 8) * -4;
    uVar2 = uVar2 & ~uVar3;
  }
  else {
    if ((uVar2 & uVar3) != 0) {
      return;
    }
    uVar2 = uVar2 | uVar3;
    *(int *)((int)this + 0xe8) =
         *(int *)((int)this + 0xe8) + *(int *)((int)this + param_2 * 0x10 + 8) * 4;
  }
  *(uint *)((int)this + 0xe0) = uVar2;
  return;
}

