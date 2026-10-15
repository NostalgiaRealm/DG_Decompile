/*
 * FUN_180086470 at 180086470
 * undefined FUN_180086470(void)
 * Address ranges: 180086470-18008651f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180086470(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong extraout_x12;
  undefined4 local_20;
  undefined8 local_1c;
  undefined8 uStack_14;
  uint local_c;
  
  iVar3 = func_0x0001801bad48(&local_20,*(undefined4 *)(param_1 + 0x2c));
  local_20 = (undefined4)local_1c;
  if (*(char *)(extraout_x12 + 0x248) != '\0') {
    lVar1 = 0x40;
    if (iVar3 == 0x15) {
      lVar1 = 0x50;
    }
    local_20 = *(undefined4 *)(*(longlong *)(extraout_x12 + 8) + lVar1);
  }
  bVar2 = *(int *)(extraout_x12 + 0x34) == 1;
  if (bVar2) {
    local_1c = 5;
  }
  else {
    local_1c = 9;
  }
  uStack_14 = 0xffffffff;
  local_c = (uint)bVar2;
  (**(code **)(*(longlong *)**(undefined8 **)(extraout_x12 + 0x58) + 0x38))
            ((longlong *)**(undefined8 **)(extraout_x12 + 0x58),*(undefined8 *)(extraout_x12 + 0x78)
             ,&local_20,extraout_x12 + 0x140);
  return;
}

