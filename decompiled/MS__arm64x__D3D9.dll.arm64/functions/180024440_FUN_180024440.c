/*
 * FUN_180024440 at 180024440
 * undefined FUN_180024440(void)
 * Address ranges: 180024440-1800244ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024440(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int extraout_w1;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined1 auStack_10 [16];
  
  local_20 = 0;
  uVar1 = func_0x00018012faf0();
  uStack_18 = CONCAT44(*(ushort *)(param_1 + 0x16) - 1,uVar1);
  if (extraout_w1 != -1) {
    puVar2 = (undefined8 *)FUN_180023a20(param_1,auStack_10,extraout_w1,extraout_w1 + 1);
    uStack_18 = puVar2[1];
    local_20 = *puVar2;
  }
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
            (*(longlong **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x94),
             *(undefined4 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x18),&local_20);
  return;
}

