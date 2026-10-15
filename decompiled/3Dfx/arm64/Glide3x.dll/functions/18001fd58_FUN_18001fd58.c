/*
 * FUN_18001fd58 at 18001fd58
 * undefined __cdecl FUN_18001fd58(longlong * param_1)
 * Address ranges: 18001fd58-18001fdf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001fd58(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  longlong local_30 [2];
  
  local_30[0] = *param_1;
  plVar4 = (longlong *)param_1[1];
  uVar1 = *(uint *)(param_1 + 3);
  uVar2 = *(uint *)(param_1 + 2);
  uVar3 = *(uint *)((longlong)param_1 + 0x14);
  *(undefined4 *)((longlong)plVar4 + 0x43fc) = *(undefined4 *)((longlong)param_1 + 0x1c);
  if (uVar1 != 0) {
    (**(code **)(*(longlong *)plVar4[0x660] + 0x50))((longlong *)plVar4[0x660],0,2);
    bVar5 = FUN_18000c0a0((longlong *)plVar4[0x661],uVar2,uVar3,local_30,uVar1,1);
    if ((bVar5 & 1) != 0) {
      if ((*(uint *)((longlong)plVar4 + 0x2be4) >> 1 & 1) != 0) {
        (**(code **)(*plVar4 + 0x2e0))(plVar4);
      }
      (**(code **)(*(longlong *)plVar4[0x660] + 0x90))();
    }
  }
  return;
}

