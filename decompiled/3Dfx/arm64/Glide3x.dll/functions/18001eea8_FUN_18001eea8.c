/*
 * FUN_18001eea8 at 18001eea8
 * undefined __cdecl FUN_18001eea8(longlong param_1, undefined4 param_2, longlong param_3, longlong param_4, longlong param_5)
 * Address ranges: 18001eea8-18001f03f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001eea8(longlong param_1,undefined4 param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 auStack_140 [30];
  
  FUN_18001bf90(param_1 + 0x3668);
  lVar6 = 0x42a0;
  *(undefined4 *)(param_1 + 0x4714) = param_2;
  uVar3 = FUN_18001e900(param_1 + 0x42a0,param_3,auStack_140);
  FUN_18001e900(param_1 + lVar6,param_4,(undefined8 *)((longlong)auStack_140 + (ulonglong)uVar3 * 4)
               );
  FUN_18001e900(param_1 + lVar6,param_5,
                (undefined8 *)((longlong)auStack_140 + (ulonglong)(uVar3 << 1) * 4));
  lVar6 = *(longlong *)(param_1 + 0x3340);
  FUN_180038440((uint *)(lVar6 + 0x12c0));
  if (*(char *)(lVar6 + 0x14c4) != '\0') {
    uVar1 = uVar3 * 0xc + 7;
    uVar2 = (uVar1 & 0xfffffff8) + 0x18;
    puVar4 = (undefined8 *)FUN_180038310(lVar6 + 0x12c0,uVar2);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1800643e0((uint *)(lVar6 + 0x14c0));
      puVar4[1] = (ulonglong)uVar2;
      puVar4[3] = param_1;
      *(uint *)(puVar4 + 4) = uVar3;
      *(undefined4 *)((longlong)puVar4 + 0x24) = param_2;
      puVar8 = (undefined8 *)((longlong)puVar4 + 0x2fU & 0xfffffffffffffff8);
      puVar4[2] = puVar8;
      thunk_FUN_1800010d8(puVar8,auStack_140,(ulonglong)(uVar3 * 0xc));
      uVar7 = (ulonglong)uVar1 & 0xfffffff8;
      *(undefined8 *)(uVar7 + (longlong)puVar8) = 0;
      *puVar4 = FUN_18001f040;
      *(ulonglong *)(lVar6 + (ulonglong)*(uint *)(lVar6 + 0x14bc) * 0x28 + 0x1350) =
           uVar7 + (longlong)puVar8;
      if (*(char *)(lVar6 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar6 + 0x12c0) = 0;
        SetEvent(*(HANDLE *)(lVar6 + 0x1340));
        return;
      }
      goto LAB_18001f020;
    }
    *(undefined4 *)(lVar6 + 0x12c0) = 0;
    Sleep(100);
    FUN_180038440((uint *)(lVar6 + 0x12c0));
  }
  plVar5 = *(longlong **)(lVar6 + 0x14a0);
  *plVar5 = (longlong)auStack_140;
  plVar5[1] = param_1;
  *(uint *)(plVar5 + 2) = uVar3;
  *(undefined4 *)((longlong)plVar5 + 0x14) = param_2;
  FUN_18001f040(plVar5);
LAB_18001f020:
  *(undefined4 *)(lVar6 + 0x12c0) = 0;
  return;
}

