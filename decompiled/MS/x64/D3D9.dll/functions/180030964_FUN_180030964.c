/*
 * FUN_180030964 at 180030964
 * undefined __fastcall FUN_180030964(longlong * param_1, undefined8 param_2)
 * Address ranges: 180030964-180030a4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030964(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined7 extraout_var;
  ulonglong uVar7;
  
  lVar2 = DAT_180111f20;
  uVar5 = (**(code **)(*param_1 + 0x20))();
  uVar7 = (ulonglong)uVar5;
  plVar1 = (longlong *)(&DAT_1801128e0)[uVar7 * 0x4b];
  if (*(char *)(lVar2 + 0x882) == '\0') {
    cVar4 = FUN_1800308a8(param_1);
    iVar6 = (int)CONCAT71(extraout_var,cVar4);
    *(bool *)((longlong)param_1 + 0x43) = iVar6 != 0;
    if ((bool)*(char *)(lVar2 + 0x5fc) != (iVar6 == 0)) {
      FUN_180030750(param_1,'\x01');
    }
  }
  if (*(int *)(lVar2 + 0x808) != *(int *)(lVar2 + 0x5e4)) {
    *(int *)(param_1 + 2) = *(int *)(lVar2 + 0x5e4);
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,lVar2 + 0x5dc,param_2);
  lVar3 = DAT_180111f20;
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)(DAT_180111f20 + 0x8c2) >> 2 & 1;
  *(uint *)(param_1 + 3) = *(uint *)(lVar3 + 0x8c6) & 1;
  FUN_18002f700(lVar3,uVar7,*(uint *)(&DAT_180112a8c + uVar7 * 600),
                *(uint *)(&DAT_180112a90 + uVar7 * 600));
  (**(code **)(*param_1 + 0x68))(param_1);
  *(undefined1 *)(lVar2 + 0x7e9) = 0;
  return;
}

