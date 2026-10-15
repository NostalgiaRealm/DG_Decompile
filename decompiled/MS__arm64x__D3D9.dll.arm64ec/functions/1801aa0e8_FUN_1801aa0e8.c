/*
 * FUN_1801aa0e8 at 1801aa0e8
 * undefined FUN_1801aa0e8(void)
 * Address ranges: 1801aa0e8-1801aa393
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801aa0e8(longlong param_1,longlong param_2,uint param_3,int param_4,undefined4 param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar6 = __hybrid_os_arm64x_dispatch_icall;
  if (1 < *(uint *)(param_1 + 0x38) && param_3 != 0) {
    uVar9 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    uVar7 = (*extraout_x11)(uVar9,0);
    (*(code *)puVar6)(0x180224000);
    uVar8 = (*extraout_x11_00)(param_1,0);
    local_68 = 0;
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar13 = 0;
      do {
        if (((1 << (ulonglong)(uVar13 & 0x1f) & param_3) != 0) &&
           (uVar12 = 1, 1 < *(uint *)(param_1 + 0x38))) {
          do {
            uVar5 = uVar12 - 1;
            uVar11 = uVar7 >> (ulonglong)(uVar5 & 0x1f);
            if (uVar11 == 0) {
              uVar11 = 1;
            }
            uVar1 = uVar8 >> (ulonglong)(uVar5 & 0x1f);
            if (uVar1 == 0) {
              uVar1 = 1;
            }
            uVar2 = uVar7 >> (ulonglong)(uVar12 & 0x1f);
            if (uVar2 == 0) {
              uVar2 = 1;
            }
            uVar3 = uVar8 >> (ulonglong)(uVar12 & 0x1f);
            if (uVar3 == 0) {
              uVar3 = 1;
            }
            fVar16 = 1.0;
            if (*(char *)(param_1 + 0x4c) == '\0') {
              fVar16 = 0.5;
            }
            iVar10 = param_6;
            if (param_6 == 0) {
              iVar10 = *(int *)(param_1 + 0x3c);
            }
            iVar4 = uVar12 + iVar10 * uVar13;
            FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1938),auStack_58,
                          *(undefined4 *)(param_2 + 0x30),iVar4);
            iVar10 = param_4;
            if (param_4 == -1) {
              iVar10 = *(int *)(param_2 + 0x2c);
            }
            FUN_18020d168(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x1930),auStack_60,iVar10,
                          param_5);
            fVar15 = (float)uVar1;
            fVar14 = (float)uVar11;
            uVar11 = 0x100;
            if (*(char *)(param_1 + 0x4c) == '\0') {
              uVar11 = 0;
            }
            FUN_1801a4848(0x3efd70a4,0x3efd70a4,(float)uVar2 + 0.495,(float)uVar3 + 0.495,
                          fVar16 / fVar14,fVar16 / fVar15,(fVar14 + fVar16) / fVar14,
                          (fVar15 + fVar16) / fVar15,*(undefined8 *)(param_1 + 0x130),
                          *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x2c),uVar12,
                          iVar4,uVar5,uVar13,iVar4 + -1,*(undefined8 *)(param_2 + 0x14),0,
                          *(undefined8 *)(param_2 + 0x14),0,0,auStack_58,&local_68,auStack_60,
                          &local_68,&local_68,*(undefined4 *)(param_2 + 0x48),0,0,
                          *(char *)(param_1 + 0x4c),(uVar11 >> 8) << 0x10 | 0x80000016,0);
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(param_1 + 0x38));
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(uint *)(param_1 + 0x34));
    }
  }
  return;
}

