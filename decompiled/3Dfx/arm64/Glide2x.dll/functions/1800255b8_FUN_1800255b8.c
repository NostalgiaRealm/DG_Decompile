/*
 * FUN_1800255b8 at 1800255b8
 * undefined __cdecl FUN_1800255b8(longlong param_1, undefined8 param_2, longlong * param_3)
 * Address ranges: 1800255b8-18002563f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800255b8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong alStack_30 [4];
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0);
  lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x1500) + 0x18);
  uVar3 = *(undefined8 *)(*(longlong *)(lVar4 + 0x1508) + 0xb78);
  lVar4 = *(longlong *)(param_1 + 0x668) + 0x40;
  if (*(int *)(param_1 + 0x670) + 4U < 0x401) {
    plVar1 = FUN_1800450f0(lVar4,alStack_30,1,lVar2,uVar3);
    lVar4 = plVar1[1];
  }
  else {
    plVar1 = FUN_1800450f0(lVar4,alStack_30,2,lVar2,uVar3);
    lVar4 = plVar1[1];
    *(undefined4 *)(param_1 + 0x670) = 0;
  }
  *(int *)(param_1 + 0x670) = *(int *)(param_1 + 0x670) + 4;
  *param_3 = lVar4;
  return;
}

