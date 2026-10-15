/*
 * FUN_1800791b0 at 1800791b0
 * undefined FUN_1800791b0(void)
 * Address ranges: 1800791b0-18007925b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800791b0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  undefined4 local_60;
  undefined1 local_5c;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 auStack_40 [48];
  
  bVar1 = *(byte *)(*(longlong *)(param_2 + 0x10) + 0x441);
  if ((bVar1 & 0xc) != 0xc) {
    func_0x00018018b228(param_1,param_2,*(undefined4 *)(param_2 + 0x1fc),~bVar1 & 0xc,auStack_40);
    local_60 = *(undefined4 *)(param_2 + 0xbc);
    local_50 = 0;
    local_4c = 0;
    local_44 = 0x3f800000;
    local_5c = 0xe4;
    param_1 = FUN_1800f58b8(param_2 + 0x20,param_3,0x36,auStack_40,&local_60,0);
  }
  FUN_180078f18(param_1,param_2,param_3,*(undefined4 *)(param_2 + 0x1fc));
  if ((*(uint *)(param_2 + 0x1fc) & 0x3f00) == 0) {
    FUN_1800f4370(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x1fc) = 0;
  }
  return;
}

