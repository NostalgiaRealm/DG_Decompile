/*
 * FUN_18001f5c0 at 18001f5c0
 * undefined __cdecl FUN_18001f5c0(undefined8 * param_1)
 * Address ranges: 18001f5c0-18001f653
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001f5c0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  
  plVar3 = (longlong *)*param_1;
  plVar4 = (longlong *)param_1[1];
  uVar1 = *(uint *)(param_1 + 2);
  uVar2 = *(uint *)((longlong)param_1 + 0x14);
  *(undefined4 *)((longlong)plVar4 + 0x43fc) = *(undefined4 *)(param_1 + 3);
  (**(code **)(*(longlong *)plVar4[0x660] + 0x50))((longlong *)plVar4[0x660],0,2);
  bVar5 = FUN_18000c0a0((longlong *)plVar4[0x661],uVar1,uVar2,plVar3,0,1);
  if ((bVar5 & 1) != 0) {
    if ((*(uint *)((longlong)plVar4 + 0x2be4) >> 1 & 1) != 0) {
      (**(code **)(*plVar4 + 0x2e0))(plVar4);
    }
    (**(code **)(*(longlong *)plVar4[0x660] + 0x90))();
  }
  return;
}

