/*
 * FUN_180195cf0 at 180195cf0
 * undefined FUN_180195cf0(void)
 * Address ranges: 180195cf0-180195f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180195cf0(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
             int param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 extraout_w10;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined4 local_50 [4];
  
  local_50[0] = param_2;
  puVar5 = (undefined8 *)FUN_1802229a8(0x170);
  if (puVar5 != (undefined8 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    uVar6 = (ulonglong)uVar1;
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x7c);
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(undefined4 *)(puVar5 + 5) = param_3;
    *(int *)((longlong)puVar5 + 0x2c) = param_4;
    *(uint *)(puVar5 + 4) = uVar1;
    *(undefined4 *)((longlong)puVar5 + 0x24) = local_50[0];
    *(uint *)(puVar5 + 8) = param_7;
    *(int *)((longlong)puVar5 + 0x44) = param_6;
    *(undefined1 *)((longlong)puVar5 + 0x4d) = 0;
    *(bool *)((longlong)puVar5 + 0x4c) = iVar2 != 2;
    iVar2 = param_5;
    if ((param_7 & 4) != 0) {
      iVar2 = 1;
    }
    *puVar5 = &PTR_D3DPERF_GetStatus_native_18022e0f8;
    puVar5[1] = param_1;
    uVar7 = 1;
    if (param_6 == 2 || param_6 == 5) {
      uVar7 = 6;
    }
    *(int *)(puVar5 + 6) = iVar2;
    *(undefined4 *)((longlong)puVar5 + 0x34) = uVar7;
    if ((param_7 & 4) == 0) {
      param_5 = 0;
    }
    *(int *)(puVar5 + 7) = param_5;
    *(undefined4 *)(puVar5 + 9) = 0;
    if ((param_5 == 0) || (10 < param_4 - 0x15U)) {
      param_5 = *(int *)(puVar5 + 6);
    }
    *(int *)((longlong)puVar5 + 0x3c) = param_5;
    if (param_4 - 0x27U < 3) {
      *(uint *)(puVar5 + 8) = param_7 | 8;
    }
    FUN_1801baf90(local_50,puVar5[1],param_4);
    *(undefined4 *)(puVar5 + 9) = local_50[0];
    *puVar5 = &PTR_D3DPERF_GetStatus_native_18022cbd8;
    lVar9 = *(longlong *)(param_1 + 0x1cf10);
    puVar5[10] = lVar9;
    lVar8 = *(longlong *)(param_1 + 0x1cf10);
    *(int *)(puVar5 + 0xd) = (int)uVar6;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[0xc] = lVar8;
    puVar5[0xe] = lVar8 + (uVar6 & 0xffffffff) * 0x18c0 + 0x6b0;
    puVar5[0xf] = 0;
    lVar8 = *(longlong *)(param_1 + 0x1cf10);
    *(undefined4 *)(puVar5 + 0x1d) = extraout_w10;
    *(int *)(puVar5 + 0x15) = (int)uVar6;
    puVar5[0x18] = 0;
    puVar5[0x19] = 0;
    puVar5[0x14] = lVar8;
    puVar5[0x1a] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x16] = lVar8 + (uVar6 & 0xffffffff) * 0x18c0 + 0x6b0;
    puVar5[0x17] = 0;
    puVar5[0xb] = lVar9 + (uVar6 & 0xffffffff) * 0x18c0 + 0x6b0;
    puVar5[0x1f] = 0;
    puVar5[0x1e] = 0;
    puVar5[0x21] = 0;
    puVar5[0x20] = 0;
    *puVar5 = &PTR_FUN_18022c900;
    puVar5[0x1c] = &PTR_FUN_18022c858;
    puVar5[0x22] = param_1;
    lVar8 = *(longlong *)(param_1 + 0x1cf10);
    *(uint *)(puVar5 + 0x24) = *(uint *)(puVar5 + 4);
    puVar5[0x27] = 0;
    puVar5[0x28] = 0;
    puVar5[0x29] = 0;
    puVar5[0x2a] = 0;
    puVar5[0x23] = lVar8;
    puVar5[0x25] = lVar8 + (ulonglong)*(uint *)(puVar5 + 4) * 0x18c0 + 0x6b0;
    puVar5[0x26] = 0;
    puVar5[0x2c] = 0;
    puVar5[0x2b] = 0;
    *(undefined4 *)(puVar5 + 0x2d) = 0x100;
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
    *(undefined4 *)(puVar5 + 0x1d) = extraout_w10;
    (*(code *)puVar3)(0x180224000);
    cVar4 = (*extraout_x11)(puVar5);
    if (cVar4 != '\0') {
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      return puVar5 + 0x1c;
    }
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)(puVar5 + 0x1c,1);
  }
  return (undefined8 *)0x0;
}

