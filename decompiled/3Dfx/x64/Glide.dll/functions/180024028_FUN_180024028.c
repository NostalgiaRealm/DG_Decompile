/*
 * FUN_180024028 at 180024028
 * undefined __fastcall FUN_180024028(longlong param_1, undefined8 param_2, longlong * param_3)
 * Address ranges: 180024028-1800240ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024028(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_28 [4];
  
  lVar5 = *(longlong *)(param_1 + 0x668) + 0x40;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0);
  lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x1500) + 0x18);
  uVar3 = *(undefined8 *)(*(longlong *)(lVar6 + 0x1508) + 0xb78);
  if (*(int *)(param_1 + 0x670) + 4U < 0x401) {
    plVar4 = FUN_180042984(lVar5,local_28,1,lVar2,uVar3);
    lVar6 = plVar4[1];
  }
  else {
    plVar4 = FUN_180042984(lVar5,local_28,2,lVar2,uVar3);
    lVar6 = plVar4[1];
    *(undefined4 *)(param_1 + 0x670) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x670);
  *param_3 = lVar6;
  *(int *)(param_1 + 0x670) = iVar1 + 4;
  return;
}

