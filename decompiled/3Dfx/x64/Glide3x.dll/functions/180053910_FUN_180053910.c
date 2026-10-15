/*
 * FUN_180053910 at 180053910
 * ulonglong __fastcall FUN_180053910(undefined8 param_1, longlong param_2)
 * Address ranges: 180053910-1800539cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180053910(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 local_58;
  undefined4 local_50;
  
  *(uint *)(param_2 + 0x3c) =
       (uint)(*(longlong *)(param_2 + 0x28) == *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xda0))
  ;
  *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x28) =
       *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x1150);
  *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x20) =
       *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x12a0);
  *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x70) =
       *(undefined8 *)(*(longlong *)(param_2 + 0x18) + 0x12b0);
  lVar6 = *(longlong *)(param_2 + 0x18);
  lVar5 = *(longlong *)(lVar6 + 0x1508);
  lVar6 = FUN_180043b88(lVar6 + 0x19d8,(byte *)(lVar6 + 0x18));
  FUN_18004a62c(lVar5,lVar6);
  lVar6 = *(longlong *)(param_2 + 0x20);
  iVar1 = *(int *)(lVar6 + 0x18);
  iVar2 = *(int *)(lVar6 + 0x1c);
  uVar3 = *(uint *)(lVar6 + 0x20);
  uVar4 = *(uint *)(lVar6 + 0x24);
  uVar7 = (**(code **)(**(longlong **)(param_2 + 0x28) + 0x50))();
  if (((uint)(iVar1 * 2) / uVar3 < local_58) ||
     (uVar7 = (ulonglong)(uint)(iVar2 * 2) / (ulonglong)uVar4, (uint)uVar7 < local_50)) {
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  else {
    uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
  }
  return uVar7;
}

