/*
 * FUN_18001eda0 at 18001eda0
 * undefined __cdecl FUN_18001eda0(undefined8 * param_1)
 * Address ranges: 18001eda0-18001eea7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001eda0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  
  puVar2 = (undefined8 *)*param_1;
  plVar3 = (longlong *)param_1[1];
  uVar1 = *(uint *)(param_1 + 2);
  *(undefined4 *)((longlong)plVar3 + 0x43fc) = *(undefined4 *)((longlong)param_1 + 0x14);
  (**(code **)(*(longlong *)plVar3[0x660] + 0x50))((longlong *)plVar3[0x660],0,2);
  if (*(int *)(plVar3[0x661] + 0x274) != 2) {
    (**(code **)(*plVar3 + 0x2e0))(plVar3);
    *(undefined4 *)(plVar3[0x661] + 0x274) = 2;
  }
  FUN_180014ce8((undefined8 *)plVar3[0x661],2,2);
  uVar4 = 0;
  FUN_18000bfa8(plVar3[0x661],puVar2,0,1);
  FUN_18000bfa8(plVar3[0x661],(undefined8 *)((longlong)puVar2 + (ulonglong)uVar1 * 4),uVar4,1);
  **(int **)(plVar3[0x661] + 0x268) = *(int *)(plVar3[0x661] + 0x270) + -2;
  *(int *)(*(longlong *)(plVar3[0x661] + 0x268) + 4) = *(int *)(plVar3[0x661] + 0x270) + -1;
  *(longlong *)(plVar3[0x661] + 0x268) = *(longlong *)(plVar3[0x661] + 0x268) + 8;
  if ((*(uint *)((longlong)plVar3 + 0x2be4) >> 1 & 1) != 0) {
    (**(code **)(*plVar3 + 0x2e0))(plVar3);
  }
  (**(code **)(*(longlong *)plVar3[0x660] + 0x90))();
  return;
}

