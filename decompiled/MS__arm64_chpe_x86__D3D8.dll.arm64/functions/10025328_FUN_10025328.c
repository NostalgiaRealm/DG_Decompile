/*
 * FUN_10025328 at 10025328
 * undefined FUN_10025328(void)
 * Address ranges: 10025328-10025467
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025328(int param_1,int param_2,int param_3,undefined8 param_4,int param_5,
                 undefined4 param_6)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong local_130;
  int iStack_128;
  undefined *puStack_124;
  longlong lStack_120;
  ulonglong local_118;
  ulonglong local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong uStack_e8;
  undefined8 local_e0;
  
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8._0_2_ = 0;
  local_f0 = 0;
  local_e0 = 0;
  uVar2 = *(uint *)(param_3 + 0xc);
  uStack_100 = 0x200000200000000;
  param_2 = param_2 + uVar2 * param_5;
  local_118 = (ulonglong)uVar2;
  local_130 = (ulonglong)(param_2 + (uint)*(byte *)(param_3 + 0x17) * 4);
  puStack_124 = &DAT_1012b678;
  if (*(char *)(param_3 + 0x8c) != -1) {
    local_110 = (ulonglong)uVar2;
    puStack_124 = (undefined *)(param_2 + (uint)*(byte *)(param_3 + 0x8f) * 4);
    uStack_100 = CONCAT17(*(undefined1 *)(param_3 + 0x90),0x200000000);
  }
  uVar3 = uStack_100;
  iStack_128 = 0;
  puVar1 = &DAT_1012b670;
  if (*(char *)(param_3 + 0x24) != -1) {
    uStack_108 = (ulonglong)uVar2;
    puVar1 = (undefined *)(param_2 + (uint)*(byte *)(param_3 + 0x27) * 4);
    uStack_f8._0_2_ = (ushort)*(byte *)(param_3 + 0x28) << 8;
  }
  lStack_120 = ZEXT48(puVar1) << 0x20;
  if (*(char *)(param_3 + 0x1c) != -1) {
    iStack_128 = param_2 + (uint)*(byte *)(param_3 + 0x1f) * 4;
    uStack_108 = CONCAT44(uVar2,(undefined4)uStack_108);
    uStack_100 = CONCAT44(uStack_100._4_4_,(uint)*(byte *)(param_3 + 0x1d));
    uVar4 = uStack_100;
    uStack_100._7_1_ = SUB81(uVar3,7);
    uStack_100._0_7_ = CONCAT16(*(undefined1 *)(param_3 + 0x20),(int6)uVar4);
  }
  uStack_e8 = (ulonglong)(param_1 + 0x1ec);
  uStack_f8 = (ulonglong)CONCAT23(1,CONCAT12(*(int *)(param_3 + 4) != 0,(short)uStack_f8));
  FUN_1002bf10(param_1,&local_130,0,param_6);
  return;
}

