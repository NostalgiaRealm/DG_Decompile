/*
 * FUN_180044268 at 180044268
 * undefined FUN_180044268(void)
 * Address ranges: 180044268-180044507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180044268(undefined4 param_1,longlong param_2,uint param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,longlong param_8)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if (param_3 != 0) {
    uVar9 = 0;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0x3f0;
    if (param_3 < 0x3f1) {
      uVar1 = param_3;
    }
    uVar2 = uVar1 * 0x10;
    do {
      lVar7 = *(longlong *)(param_2 + 0xf6e0);
      FUN_180101630(lVar7 + 0x12c0);
      if (*(char *)(lVar7 + 0x14c4) == '\0') {
LAB_1800444a0:
        plVar5 = *(longlong **)(lVar7 + 0x14a0);
        *plVar5 = param_4;
        plVar5[1] = param_2;
        *(uint *)(plVar5 + 2) = uVar1;
        *(undefined4 *)((longlong)plVar5 + 0x14) = param_5;
        *(undefined4 *)(plVar5 + 3) = param_6;
        *(undefined4 *)((longlong)plVar5 + 0x1c) = param_1;
        *(undefined4 *)(plVar5 + 4) = param_7;
        *(longlong *)((longlong)plVar5 + 0x24) = param_8;
        FUN_180044528();
LAB_1800444d0:
        *(undefined4 *)(lVar7 + 0x12c0) = 0;
      }
      else {
        puVar4 = (undefined8 *)FUN_180101500(lVar7 + 0x12c0,(ulonglong)(uVar2 + 0x30));
        pcVar3 = __imp_KERNEL32_dll_Sleep;
        if (puVar4 == (undefined8 *)0x0) {
          *(undefined4 *)(lVar7 + 0x12c0) = 0;
          (*pcVar3)(100);
          FUN_180101630(lVar7 + 0x12c0);
          goto LAB_1800444a0;
        }
        FUN_1800015a0(lVar7 + 0x14c0);
        puVar4[1] = (ulonglong)(uVar2 + 0x30);
        puVar4[3] = param_2;
        *(uint *)(puVar4 + 4) = uVar1;
        *(undefined4 *)((longlong)puVar4 + 0x24) = param_5;
        *(undefined4 *)(puVar4 + 5) = param_6;
        *(undefined4 *)((longlong)puVar4 + 0x2c) = param_1;
        *(undefined4 *)(puVar4 + 6) = param_7;
        *(longlong *)((longlong)puVar4 + 0x34) = param_8;
        uVar8 = (longlong)puVar4 + 0x43U & 0xfffffffffffffff8;
        puVar4[2] = uVar8;
        thunk_FUN_180001218(uVar8,param_4,(ulonglong)uVar2);
        puVar6 = (undefined8 *)(uVar8 + uVar2);
        *puVar6 = 0;
        *puVar4 = FUN_180044528;
        *(undefined8 **)(lVar7 + (ulonglong)*(uint *)(lVar7 + 0x14bc) * 0x28 + 0x1350) = puVar6;
        pcVar3 = __imp_KERNEL32_dll_SetEvent;
        if (*(char *)(lVar7 + 0x14c5) == '\0') goto LAB_1800444d0;
        *(undefined4 *)(lVar7 + 0x12c0) = 0;
        (*pcVar3)(*(undefined8 *)(lVar7 + 0x1340));
      }
      uVar9 = uVar1 + uVar9;
      param_4 = param_4 + (ulonglong)uVar1 * 0x10;
      if (param_3 <= uVar9) {
        return;
      }
    } while( true );
  }
  lVar7 = *(longlong *)(param_2 + 0xf6e0);
  FUN_180101630(lVar7 + 0x12c0);
  if (*(char *)(lVar7 + 0x14c4) != '\0') {
    puVar4 = (undefined8 *)FUN_180101500(lVar7 + 0x12c0,0x20);
    pcVar3 = __imp_KERNEL32_dll_Sleep;
    if (puVar4 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar7 + 0x14c0);
      puVar4[1] = 0x20;
      puVar4[2] = param_2;
      puVar6 = (undefined8 *)((longlong)puVar4 + 0x37U & 0xfffffffffffffff8);
      *(undefined4 *)(puVar4 + 3) = param_5;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = param_6;
      *(undefined4 *)(puVar4 + 4) = param_1;
      *(undefined4 *)((longlong)puVar4 + 0x24) = param_7;
      puVar4[5] = param_8;
      *puVar6 = 0;
      *puVar4 = FUN_180044508;
      *(undefined8 **)(lVar7 + (ulonglong)*(uint *)(lVar7 + 0x14bc) * 0x28 + 0x1350) = puVar6;
      pcVar3 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar7 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar7 + 0x12c0) = 0;
        (*pcVar3)(*(undefined8 *)(lVar7 + 0x1340));
        return;
      }
      goto LAB_180044380;
    }
    *(undefined4 *)(lVar7 + 0x12c0) = 0;
    (*pcVar3)(100);
    FUN_180101630(lVar7 + 0x12c0);
  }
  plVar5 = *(longlong **)(lVar7 + 0x14a0);
  *plVar5 = param_2;
  *(undefined4 *)(plVar5 + 1) = param_5;
  *(undefined4 *)((longlong)plVar5 + 0xc) = param_6;
  *(undefined4 *)(plVar5 + 2) = param_1;
  *(undefined4 *)((longlong)plVar5 + 0x14) = param_7;
  plVar5[3] = param_8;
  FUN_180044508();
LAB_180044380:
  *(undefined4 *)(lVar7 + 0x12c0) = 0;
  return;
}

