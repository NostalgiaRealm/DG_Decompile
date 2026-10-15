/*
 * FUN_18018d7f0 at 18018d7f0
 * undefined FUN_18018d7f0(void)
 * Address ranges: 18018d7f0-18018d8ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018d7f0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 *local_80;
  undefined8 uStack_78;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 auStack_40 [48];
  
  bVar1 = *(byte *)(*(longlong *)(param_2 + 0x10) + 0x441);
  if ((bVar1 & 0xc) != 0xc) {
    FUN_18018b228(param_1,param_2,*(undefined4 *)(param_2 + 0x1fc),~bVar1 & 0xc,auStack_40);
    local_60 = *(undefined4 *)(param_2 + 0xbc);
    local_50 = 0;
    local_4c = 0;
    local_44 = 0x3f800000;
    local_5c = 0xe4;
    local_80 = &local_60;
    uStack_78 = 0;
    param_1 = FUN_180214e10(param_2 + 0x20,param_3,0x36,auStack_40,&local_80,0x10);
  }
  FUN_18018d4f8(param_1,param_2,param_3,*(undefined4 *)(param_2 + 0x1fc));
  if ((*(uint *)(param_2 + 0x1fc) & 0x3f00) == 0) {
    FUN_180213800(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x1fc) = 0;
  }
  return;
}

