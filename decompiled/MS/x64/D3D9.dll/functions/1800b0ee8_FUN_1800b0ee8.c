/*
 * FUN_1800b0ee8 at 1800b0ee8
 * uint __fastcall FUN_1800b0ee8(longlong param_1, longlong param_2, undefined8 * param_3, int * param_4, undefined8 * param_5, undefined1 param_6)
 * Address ranges: 1800b0ee8-1800b10d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1800b0ee8(longlong param_1,longlong param_2,undefined8 *param_3,int *param_4,
                  undefined8 *param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  undefined8 uVar5;
  int iVar6;
  LPRECT lprcDst;
  int iVar7;
  RECT local_58;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar1 = *(longlong *)(param_2 + 8);
  lVar2 = param_3[1];
  if (((*(int *)(*(longlong *)(lVar1 + 0x70) + 8) == 2) &&
      (*(int *)(*(longlong *)(lVar2 + 0x70) + 8) != 2)) &&
     ((*(uint *)((longlong)param_3 + 0x54) & 0xfffffffd) == 0)) {
    FUN_180014f4c(param_3);
  }
  FUN_180014ecc((longlong)param_3,param_2);
  if ((*(byte *)(param_3 + 10) & 1) != 0) {
    local_58._0_8_ = *(undefined8 *)(param_3[1] + 0x70);
    local_58.right = 0;
    local_58.bottom = 0;
    uStack_48 = 0;
    local_40 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x80))
              (*(longlong **)(param_1 + 0x28),&local_58,0);
  }
  iVar6 = *(int *)(param_2 + 0x48);
  local_58._0_8_ = *param_5;
  local_58._8_8_ = param_5[1];
  uVar5 = FUN_1800028a0(iVar6);
  iVar7 = (int)uVar5;
  uVar5 = FUN_180002844(iVar6);
  bVar4 = FUN_1800324a8(*(undefined8 *)(param_3[1] + 0x70),
                        *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x70),
                        *(longlong **)(param_1 + 0xe98),*(undefined4 *)(lVar1 + 0x98),
                        *(undefined4 *)(lVar2 + 0x98),*(int *)(lVar1 + 0x94),*(int *)(lVar2 + 0x94),
                        1,*(int *)(param_2 + 0x70),*(int *)(param_3 + 0xe),param_4,&local_58.left,
                        (int)uVar5,iVar7,param_6);
  if (*(longlong *)(param_3[1] + 0x70) != 0) {
    FUN_180007f2c(param_3[5],(longlong)param_3);
  }
  if (bVar4 != 0) {
    if (((*(int *)(param_3[1] + 0xf0) != 0) && ((*(byte *)(param_3 + 10) & 1) != 0)) &&
       ((*(uint *)(param_3 + 0xc) < 5 && (*(uint *)((longlong)param_3 + 100) < 5)))) {
      plVar3 = *(longlong **)(param_3[1] + 0x70);
      (**(code **)(*plVar3 + 0x68))
                (plVar3,*(undefined4 *)(lVar2 + 0x98),*(undefined4 *)(lVar1 + 0x94));
    }
    if (param_3[0x19] != 0) {
      local_58._0_8_ = *param_5;
      local_58._8_8_ = param_5[1];
      lprcDst = (LPRECT)(*(longlong *)(param_3[0x19] + 0x48) +
                        (ulonglong)*(uint *)((longlong)param_3 + 0x6c) * 0x10);
      UnionRect(lprcDst,lprcDst,&local_58);
    }
  }
  return ~-(uint)(bVar4 != 0) & 0x88760827;
}

