/*
 * FUN_1801a2f78 at 1801a2f78
 * undefined FUN_1801a2f78(void)
 * Address ranges: 1801a2f78-1801a31fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_1801a2f78(longlong param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
             int param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 extraout_w10;
  code *extraout_x11;
  code *extraout_x11_00;
  undefined4 local_50 [4];
  
  local_50[0] = param_2;
  puVar5 = (undefined8 *)FUN_1802229a8(0x198);
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
    uVar8 = 1;
    if (param_6 == 2 || param_6 == 5) {
      uVar8 = 6;
    }
    *(int *)(puVar5 + 6) = iVar2;
    *(undefined4 *)((longlong)puVar5 + 0x34) = uVar8;
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
    *puVar5 = &PTR_D3DPERF_GetStatus_native_18022d478;
    lVar7 = *(longlong *)(param_1 + 0x1cf10);
    puVar5[10] = lVar7;
    lVar9 = *(longlong *)(param_1 + 0x1cf10);
    *(undefined8 *)((longlong)puVar5 + 0x8c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar5 + 0x94) = 0xffffffffffffffff;
    *(int *)(puVar5 + 0xd) = (int)uVar6;
    *(undefined8 *)((longlong)puVar5 + 0x7c) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x84) = 0;
    puVar5[0xc] = lVar9;
    *(undefined2 *)((longlong)puVar5 + 0xac) = 0;
    *(ulonglong *)((longlong)puVar5 + 0x6c) = lVar9 + (uVar6 & 0xffffffff) * 0x1ac0 + 0x900;
    *(undefined8 *)((longlong)puVar5 + 0x74) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x9c) = 0xffffffff;
    *(undefined8 *)((longlong)puVar5 + 0xa4) = 0;
    lVar9 = *(longlong *)(param_1 + 0x1cf10);
    *(undefined8 *)((longlong)puVar5 + 0xec) = 0xffffffff;
    *(undefined8 *)((longlong)puVar5 + 0xf4) = 0;
    *(undefined8 *)((longlong)puVar5 + 0xdc) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar5 + 0xe4) = 0xffffffffffffffff;
    *(int *)(puVar5 + 0x17) = (int)uVar6;
    puVar5[0x16] = lVar9;
    *(undefined8 *)((longlong)puVar5 + 0xcc) = 0;
    *(undefined8 *)((longlong)puVar5 + 0xd4) = 0;
    *(undefined2 *)((longlong)puVar5 + 0xfc) = 0;
    *(ulonglong *)((longlong)puVar5 + 0xbc) = lVar9 + (uVar6 & 0xffffffff) * 0x1ac0 + 0x900;
    *(undefined8 *)((longlong)puVar5 + 0xc4) = 0;
    puVar5[0xb] = lVar7 + (uVar6 & 0xffffffff) * 0x1ac0 + 0x900;
    puVar5[0x23] = 0;
    puVar5[0x22] = 0;
    puVar5[0x25] = 0;
    puVar5[0x24] = 0;
    *puVar5 = &PTR_FUN_18022d0a8;
    puVar5[0x20] = &PTR_FUN_18022d1e8;
    *(undefined2 *)((longlong)puVar5 + 0x18c) = 0;
    *(uint *)(puVar5 + 0x29) = *(uint *)(puVar5 + 4);
    *(undefined1 *)((longlong)puVar5 + 0x192) = 0;
    puVar5[0x28] = puVar5[10];
    puVar5[0x26] = param_1;
    puVar5[0x27] = 0;
    *(undefined4 *)(puVar5 + 0x21) = extraout_w10;
    *(ulonglong *)((longlong)puVar5 + 0x14c) =
         puVar5[10] + (ulonglong)*(uint *)(puVar5 + 4) * 0x1ac0 + 0x900;
    *(undefined8 *)((longlong)puVar5 + 0x154) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x15c) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x164) = 0;
    *(undefined8 *)((longlong)puVar5 + 0x16c) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar5 + 0x174) = 0xffffffffffffffff;
    *(undefined8 *)((longlong)puVar5 + 0x17c) = 0xffffffff;
    *(undefined8 *)((longlong)puVar5 + 0x184) = 0;
    *(undefined2 *)(puVar5 + 0x32) = 0x100;
    puVar3 = __hybrid_os_arm64x_dispatch_icall;
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    cVar4 = (*extraout_x11)(puVar5);
    if (cVar4 != '\0') {
      if (puVar5 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      return puVar5 + 0x20;
    }
    (*(code *)puVar3)(0x180224000);
    (*extraout_x11_00)(puVar5 + 0x20,1);
  }
  return (undefined8 *)0x0;
}

