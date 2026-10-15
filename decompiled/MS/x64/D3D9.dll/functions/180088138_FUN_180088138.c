/*
 * FUN_180088138 at 180088138
 * undefined8 __fastcall FUN_180088138(uint * param_1, longlong * param_2, longlong param_3)
 * Address ranges: 180088138-18008831a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180088138(uint *param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  LPVOID *ppvVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined1 local_80;
  LPVOID local_78;
  LPVOID pvStack_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined1 local_40;
  
  local_80 = 1;
  local_88 = 0x200;
  local_98 = (undefined8 *)thunk_FUN_1800fbccc(0x200);
  puVar1 = (uint *)(param_3 + 0x20);
  local_90 = local_98;
  iVar3 = FUN_1800ee08c((longlong *)&local_98,*puVar1);
  uVar4 = 0;
  FUN_1800ee2d0(*puVar1,(longlong *)&local_98,0);
  local_60 = 1;
  local_68 = 0x80;
  local_78 = (LPVOID)0x0;
  pvStack_70 = (LPVOID)0x0;
  local_78 = (LPVOID)thunk_FUN_1800fbccc(0x80);
  pvStack_70 = local_78;
  FUN_180084ca4((longlong)param_1,param_3,uVar4,(longlong *)&local_78);
  FUN_180085828(param_1,*(uint **)(param_3 + 0xd0),param_3,(longlong *)&local_78);
  local_48 = 0x80;
  local_40 = 1;
  local_58 = (undefined8 *)0x0;
  puStack_50 = (undefined8 *)0x0;
  local_58 = (undefined8 *)thunk_FUN_1800fbccc(0x80);
  puStack_50 = local_58;
  FUN_18007df30(param_1,*(longlong *)(param_3 + 0xd0),param_3,(longlong *)&local_58);
  FUN_180087cac(param_1,param_3,(longlong *)&local_78);
  FUN_1800edbe0(puVar1,(longlong *)&local_78,0x3e,0);
  ppvVar5 = &local_78;
  FUN_1800edd90((longlong *)ppvVar5,local_58,(longlong)puStack_50 - (longlong)local_58);
  FUN_1800880c4(ppvVar5,(longlong *)&local_98,param_3);
  FUN_18007bcd8((ulonglong)ppvVar5,param_3,(longlong *)&local_98);
  FUN_180087fe4(ppvVar5,(longlong *)&local_98,param_3);
  FUN_18007aef8((ulonglong)ppvVar5,(longlong *)&local_98,param_3);
  if (*(byte *)(param_3 + 0x59) != 0) {
    FUN_1800eddec((longlong *)&local_98,2,0x2000068,(ulonglong)*(byte *)(param_3 + 0x59));
  }
  uVar7 = 0;
  if (*(int *)(param_3 + 0x70) != 0) {
    do {
      FUN_1800eddec((longlong *)&local_98,4,0x4000069,uVar7);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
    } while (uVar6 < *(uint *)(param_3 + 0x70));
  }
  FUN_1800ee0e8((longlong *)&local_98,(longlong *)&local_78,iVar3);
  puVar2 = local_98;
  FUN_1800edd90(param_2,local_98,(longlong)local_90 - (longlong)local_98);
  FUN_1800fbcf0(local_58);
  FUN_1800fbcf0(local_78);
  uVar4 = FUN_1800fbcf0(puVar2);
  return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
}

