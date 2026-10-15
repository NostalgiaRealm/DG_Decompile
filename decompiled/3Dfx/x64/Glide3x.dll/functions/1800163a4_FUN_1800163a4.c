/*
 * FUN_1800163a4 at 1800163a4
 * undefined __fastcall FUN_1800163a4(longlong param_1, undefined8 param_2, longlong * param_3)
 * Address ranges: 1800163a4-180016446
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800163a4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_28 [4];
  
  lVar5 = *(longlong *)(param_1 + 0xc28) + 0x40;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x3340);
  lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x1500) + 0x18);
  uVar3 = *(undefined8 *)(*(longlong *)(lVar6 + 0x1508) + 0xb78);
  if (*(int *)(param_1 + 0xc30) + 4U < 0x401) {
    plVar4 = FUN_180044ae8(lVar5,local_28,1,lVar2,uVar3);
    lVar6 = plVar4[1];
  }
  else {
    plVar4 = FUN_180044ae8(lVar5,local_28,2,lVar2,uVar3);
    lVar6 = plVar4[1];
    *(undefined4 *)(param_1 + 0xc30) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc30);
  *param_3 = lVar6;
  *(int *)(param_1 + 0xc30) = iVar1 + 4;
  return;
}

