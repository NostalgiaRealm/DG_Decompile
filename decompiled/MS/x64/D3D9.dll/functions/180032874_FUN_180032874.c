/*
 * FUN_180032874 at 180032874
 * undefined __fastcall FUN_180032874(longlong param_1, uint param_2)
 * Address ranges: 180032874-18003290b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032874(longlong param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 local_28;
  undefined8 uStack_20;
  uint local_18 [4];
  
  local_28 = 0;
  uVar2 = (uint)*(ushort *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x20) != 0) {
    bVar1 = *(byte *)(param_1 + 0x24);
    uVar2 = ((*(ushort *)(param_1 + 0x10) - 1) + (uint)bVar1 & -(uint)bVar1) / (uint)bVar1;
  }
  uStack_20 = CONCAT44(*(ushort *)(param_1 + 0x16) - 1,uVar2);
  if (param_2 != 0xffffffff) {
    puVar3 = FUN_180032024(param_1,local_18,param_2,param_2 + 1);
    local_28 = *(undefined8 *)puVar3;
    uStack_20 = *(undefined8 *)(puVar3 + 2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
            (*(longlong **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x94),
             *(undefined4 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x28),
             *(undefined4 *)(param_1 + 0x18),&local_28);
  return;
}

