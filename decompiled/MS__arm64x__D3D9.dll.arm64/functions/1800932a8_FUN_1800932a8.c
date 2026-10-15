/*
 * FUN_1800932a8 at 1800932a8
 * undefined FUN_1800932a8(void)
 * Address ranges: 1800932a8-180093507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800932a8(longlong *param_1,longlong param_2,uint param_3,int param_4,undefined4 param_5,
                  int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  if (1 < *(uint *)(param_1 + 7) && param_3 != 0) {
    uVar6 = (**(code **)(*param_1 + 0x40))(param_1,0);
    uVar7 = (**(code **)(*param_1 + 0x48))(param_1,0);
    local_78 = 0;
    uVar11 = 0;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      do {
        if (((1 << (ulonglong)(uVar11 & 0x1f) & param_3) != 0) &&
           (uVar10 = 1, 1 < *(uint *)(param_1 + 7))) {
          do {
            uVar5 = uVar10 - 1;
            uVar9 = uVar6 >> (ulonglong)(uVar5 & 0x1f);
            if (uVar9 == 0) {
              uVar9 = 1;
            }
            uVar1 = uVar7 >> (ulonglong)(uVar5 & 0x1f);
            if (uVar1 == 0) {
              uVar1 = 1;
            }
            uVar2 = uVar6 >> (ulonglong)(uVar10 & 0x1f);
            if (uVar2 == 0) {
              uVar2 = 1;
            }
            uVar3 = uVar7 >> (ulonglong)(uVar10 & 0x1f);
            if (uVar3 == 0) {
              uVar3 = 1;
            }
            fVar12 = 1.0;
            if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
              fVar12 = 0.5;
            }
            iVar8 = param_6;
            if (param_6 == 0) {
              iVar8 = *(int *)((longlong)param_1 + 0x3c);
            }
            iVar4 = uVar10 + iVar8 * uVar11;
            FUN_1800e7b48(*(undefined8 *)(param_1[0xb] + 0x1938),auStack_68,
                          *(undefined4 *)(param_2 + 0x30),iVar4);
            iVar8 = param_4;
            if (param_4 == -1) {
              iVar8 = *(int *)(param_2 + 0x2c);
            }
            FUN_1800e7b48(*(undefined8 *)(param_1[0xb] + 0x1930),auStack_70,iVar8,param_5);
            fVar14 = (float)uVar1;
            fVar13 = (float)uVar9;
            uVar9 = 0x100;
            if (*(char *)((longlong)param_1 + 0x4c) == '\0') {
              uVar9 = 0;
            }
            FUN_18008e010(0x3efd70a4,0x3efd70a4,(float)uVar2 + 0.495,(float)uVar3 + 0.495,
                          fVar12 / fVar13,fVar12 / fVar14,(fVar13 + fVar12) / fVar13,
                          (fVar14 + fVar12) / fVar14,param_1[0x26],
                          *(undefined4 *)((longlong)param_1 + 0x2c),
                          *(undefined4 *)((longlong)param_1 + 0x2c),uVar10,iVar4,uVar5,uVar11,
                          iVar4 + -1,*(undefined8 *)(param_2 + 0x14),0,
                          *(undefined8 *)(param_2 + 0x14),0,0,auStack_68,&local_78,auStack_70,
                          &local_78,&local_78,*(undefined4 *)(param_2 + 0x48),0,0,
                          *(char *)((longlong)param_1 + 0x4c),(uVar9 >> 8) << 0x10 | 0x80000016,0);
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(param_1 + 7));
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < *(uint *)((longlong)param_1 + 0x34));
    }
  }
  return;
}

