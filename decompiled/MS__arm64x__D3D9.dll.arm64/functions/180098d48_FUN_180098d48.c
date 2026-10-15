/*
 * FUN_180098d48 at 180098d48
 * undefined FUN_180098d48(void)
 * Address ranges: 180098d48-180098f1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180098d48(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5,
                  undefined8 param_6)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar10 = param_1 + -0x100;
  lVar5 = FUN_180098370(lVar10,1);
  if (lVar5 == 0) {
    return '\0';
  }
  local_80[0] = 0;
  cVar4 = FUN_180093510(lVar10,lVar5,param_2,param_3,param_4,param_5,param_6,&local_60,local_80);
  uVar3 = local_80[0];
  if (cVar4 == '\0') {
    return '\0';
  }
  lVar5 = *(longlong *)(param_1 + -0xa8);
  uVar1 = param_2 + *(int *)(param_1 + -0xc4) * param_3;
  uStack_68 = uStack_58;
  local_70 = local_60;
  FUN_180101630(lVar5 + 0x12c0);
  if (*(char *)(lVar5 + 0x14c4) == '\0') {
LAB_180098e9c:
    plVar7 = *(longlong **)(lVar5 + 0x14a0);
    *plVar7 = lVar10;
    *(uint *)(plVar7 + 1) = uVar1;
    *(undefined8 *)((longlong)plVar7 + 0x14) = uStack_68;
    *(undefined8 *)((longlong)plVar7 + 0xc) = local_70;
    *(undefined1 *)((longlong)plVar7 + 0x1c) = uVar3;
    FUN_180098f20();
  }
  else {
    puVar6 = (undefined8 *)FUN_180101500(lVar5 + 0x12c0,0x20);
    pcVar2 = __imp_KERNEL32_dll_Sleep;
    if (puVar6 == (undefined8 *)0x0) {
      *(undefined4 *)(lVar5 + 0x12c0) = 0;
      (*pcVar2)(100);
      FUN_180101630(lVar5 + 0x12c0);
      goto LAB_180098e9c;
    }
    FUN_1800015a0(lVar5 + 0x14c0);
    puVar6[1] = 0x20;
    puVar6[2] = lVar10;
    puVar8 = (undefined8 *)((longlong)puVar6 + 0x37U & 0xfffffffffffffff8);
    *(uint *)(puVar6 + 3) = uVar1;
    *(undefined8 *)((longlong)puVar6 + 0x24) = uStack_68;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = local_70;
    *(undefined1 *)((longlong)puVar6 + 0x2c) = uVar3;
    *puVar8 = 0;
    *puVar6 = FUN_180098f20;
    *(undefined8 **)(lVar5 + (ulonglong)*(uint *)(lVar5 + 0x14bc) * 0x28 + 0x1350) = puVar8;
    pcVar2 = __imp_KERNEL32_dll_SetEvent;
    if (*(char *)(lVar5 + 0x14c5) != '\0') {
      *(undefined4 *)(lVar5 + 0x12c0) = 0;
      (*pcVar2)(*(undefined8 *)(lVar5 + 0x1340));
      goto LAB_180098ebc;
    }
  }
  *(undefined4 *)(lVar5 + 0x12c0) = 0;
LAB_180098ebc:
  if (((*(char *)(param_1 + 0x14d) != '\0') && (*(char *)(param_1 + 0x14e) != '\0')) &&
     (*(longlong *)(param_1 + 200) != 0)) {
    param_1 = param_1 + ((ulonglong)(uVar1 >> 6) + 2) * 8;
    uVar9 = (ulonglong)(uVar1 >> 3) & 7;
    *(byte *)(param_1 + uVar9) = *(byte *)(param_1 + uVar9) | (byte)(1 << ((ulonglong)uVar1 & 7));
  }
  return cVar4;
}

