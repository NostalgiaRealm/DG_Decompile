/*
 * FUN_1800200c8 at 1800200c8
 * undefined __cdecl FUN_1800200c8(longlong param_1, uint param_2, undefined4 param_3, int param_4)
 * Address ranges: 1800200c8-18002023f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800200c8(longlong param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong extraout_x12;
  longlong extraout_x12_00;
  longlong extraout_x13;
  longlong extraout_x13_00;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar6 + 0x12c0));
  if (*(char *)(lVar6 + 0x14c4) == '\0') {
LAB_180020190:
    plVar2 = *(longlong **)(lVar6 + 0x14a0);
    *plVar2 = param_1;
    *(uint *)(plVar2 + 1) = param_2;
    *(undefined4 *)((longlong)plVar2 + 0xc) = param_3;
    *(int *)(plVar2 + 2) = param_4;
    FUN_180020240(plVar2);
  }
  else {
    puVar1 = (undefined8 *)FUN_180038310(lVar6 + 0x12c0,0x18);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar6 + 0x12c0) = 0;
      Sleep(100);
      FUN_180038440((uint *)(lVar6 + 0x12c0));
      goto LAB_180020190;
    }
    FUN_1800643e0((uint *)(lVar6 + 0x14c0));
    puVar1[1] = 0x18;
    puVar1[2] = param_1;
    puVar4 = (undefined8 *)((longlong)puVar1 + 0x2bU & 0xfffffffffffffff8);
    *(uint *)(puVar1 + 3) = param_2;
    *(undefined4 *)((longlong)puVar1 + 0x1c) = param_3;
    *(int *)(puVar1 + 4) = param_4;
    *puVar4 = 0;
    *puVar1 = FUN_180020240;
    *(undefined8 **)(lVar6 + (ulonglong)*(uint *)(lVar6 + 0x14bc) * 0x28 + 0x1350) = puVar4;
    if (*(char *)(lVar6 + 0x14c5) != '\0') {
      *(undefined4 *)(lVar6 + 0x12c0) = 0;
      SetEvent(*(HANDLE *)(lVar6 + 0x1340));
      goto LAB_1800201a8;
    }
  }
  *(undefined4 *)(lVar6 + 0x12c0) = 0;
LAB_1800201a8:
  FUN_18000b9a0(param_1 + 0x45c0,*(longlong *)(param_1 + 0x44c8) + 0x3270,(ulonglong)param_2,param_3
                ,(uint)(param_4 != 0));
  if (param_4 != 0) {
    if (param_2 == 5) {
      FUN_18000b9a0(param_1 + extraout_x13,*(longlong *)(param_1 + 0x44c8) + extraout_x12,3,0,0);
      uVar3 = 4;
      lVar6 = extraout_x12_00;
      lVar5 = extraout_x13_00;
    }
    else {
      if (1 < param_2 - 3) {
        return;
      }
      uVar3 = 5;
      lVar6 = extraout_x12;
      lVar5 = extraout_x13;
    }
    FUN_18000b9a0(param_1 + lVar5,*(longlong *)(param_1 + 0x44c8) + lVar6,uVar3,0,0);
  }
  return;
}

