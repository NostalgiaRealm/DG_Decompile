/*
 * FUN_18001eb50 at 18001eb50
 * undefined __cdecl FUN_18001eb50(undefined8 * param_1)
 * Address ranges: 18001eb50-18001ec2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001eb50(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)*param_1;
  plVar2 = (longlong *)param_1[1];
  *(undefined4 *)((longlong)plVar2 + 0x43fc) = *(undefined4 *)((longlong)param_1 + 0x14);
  (**(code **)(*(longlong *)plVar2[0x660] + 0x50))((longlong *)plVar2[0x660],0,2);
  if (*(int *)(plVar2[0x661] + 0x274) != 1) {
    (**(code **)(*plVar2 + 0x2e0))(plVar2);
    *(undefined4 *)(plVar2[0x661] + 0x274) = 1;
  }
  FUN_180014ce8((undefined8 *)plVar2[0x661],1,1);
  FUN_18000bfa8(plVar2[0x661],puVar1,0,1);
  **(int **)(plVar2[0x661] + 0x268) = *(int *)(plVar2[0x661] + 0x270) + -1;
  *(longlong *)(plVar2[0x661] + 0x268) = *(longlong *)(plVar2[0x661] + 0x268) + 4;
  if ((*(uint *)((longlong)plVar2 + 0x2be4) >> 1 & 1) != 0) {
    (**(code **)(*plVar2 + 0x2e0))(plVar2);
  }
  (**(code **)(*(longlong *)plVar2[0x660] + 0x90))();
  return;
}

