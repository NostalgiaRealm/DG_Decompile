/*
 * FUN_1800916bc at 1800916bc
 * undefined __fastcall FUN_1800916bc(longlong param_1)
 * Address ranges: 1800916bc-180091756
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800916bc(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 local_38;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 uStack_14;
  uint local_c;
  
  FUN_1800ac794(param_1,&local_38);
  if (*(char *)(param_1 + 0x248) == '\0') {
    local_20 = local_38._4_4_;
  }
  else {
    uVar1 = 0x50;
    if (*(int *)(param_1 + 0x2c) != 0x15) {
      uVar1 = 0x40;
    }
    local_20 = *(undefined4 *)((ulonglong)uVar1 + *(longlong *)(param_1 + 8));
  }
  bVar2 = *(int *)(param_1 + 0x34) == 1;
  if (bVar2) {
    local_1c = 5;
  }
  else {
    local_1c = 9;
  }
  uStack_14 = 0xffffffff;
  local_c = (uint)bVar2;
  (**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x58) + 0x38))
            ((longlong *)**(undefined8 **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x78),&local_20
             ,param_1 + 0x140);
  return;
}

