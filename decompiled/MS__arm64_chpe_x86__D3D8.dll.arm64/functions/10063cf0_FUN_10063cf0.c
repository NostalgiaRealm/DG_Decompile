/*
 * FUN_10063cf0 at 10063cf0
 * undefined FUN_10063cf0(void)
 * Address ranges: 10063cf0-10063e73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10063cf0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  code *extraout_w11;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_3 != 0) {
    uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar4,0);
    if (*(char *)(param_3 + 0x1b200) == '\0') {
      puVar1 = (undefined8 *)(param_3 + 0xd8e0);
      puVar5 = puVar1;
      do {
        puVar5[1] = 0xffffffffffffffff;
        *puVar5 = 0xffffffffffffffff;
        puVar5[3] = 0xffffffffffffffff;
        puVar5[2] = 0xffffffffffffffff;
        puVar5 = puVar5 + 4;
      } while (puVar5 != (undefined8 *)(param_3 + 0x1b1c0));
      uVar6 = 0;
      if (((undefined8 *)(param_3 + 0xd8dc) < puVar1) || (param_3 + 0x1b1bc < param_3)) {
        iVar7 = 0;
        do {
          puVar5 = (undefined8 *)((int)puVar1 + uVar6 * 4);
          puVar2 = (undefined8 *)(param_3 + uVar6 * 4);
          uVar6 = uVar6 + 0x10;
          uVar9 = puVar5[1];
          uVar8 = *puVar5;
          uVar12 = puVar2[1];
          uVar10 = *puVar2;
          puVar2 = (undefined8 *)(param_3 + 0x10 + iVar7);
          uVar13 = puVar2[1];
          uVar11 = *puVar2;
          puVar2 = (undefined8 *)(param_3 + 0x20 + iVar7);
          puVar5[1] = CONCAT17(~((byte)((ulonglong)uVar12 >> 0x38) ^
                                (byte)((ulonglong)uVar9 >> 0x38)),
                               CONCAT16(~((byte)((ulonglong)uVar12 >> 0x30) ^
                                         (byte)((ulonglong)uVar9 >> 0x30)),
                                        CONCAT15(~((byte)((ulonglong)uVar12 >> 0x28) ^
                                                  (byte)((ulonglong)uVar9 >> 0x28)),
                                                 CONCAT14(~((byte)((ulonglong)uVar12 >> 0x20) ^
                                                           (byte)((ulonglong)uVar9 >> 0x20)),
                                                          CONCAT13(~((byte)((ulonglong)uVar12 >>
                                                                           0x18) ^
                                                                    (byte)((ulonglong)uVar9 >> 0x18)
                                                                    ),CONCAT12(~((byte)((ulonglong)
                                                                                        uVar12 >>
                                                                                       0x10) ^
                                                                                (byte)((ulonglong)
                                                                                       uVar9 >> 0x10
                                                                                      )),
                                                                               CONCAT11(~((byte)((
                                                  ulonglong)uVar12 >> 8) ^
                                                  (byte)((ulonglong)uVar9 >> 8)),
                                                  ~((byte)uVar12 ^ (byte)uVar9))))))));
          *puVar5 = CONCAT17(~((byte)((ulonglong)uVar10 >> 0x38) ^ (byte)((ulonglong)uVar8 >> 0x38))
                             ,CONCAT16(~((byte)((ulonglong)uVar10 >> 0x30) ^
                                        (byte)((ulonglong)uVar8 >> 0x30)),
                                       CONCAT15(~((byte)((ulonglong)uVar10 >> 0x28) ^
                                                 (byte)((ulonglong)uVar8 >> 0x28)),
                                                CONCAT14(~((byte)((ulonglong)uVar10 >> 0x20) ^
                                                          (byte)((ulonglong)uVar8 >> 0x20)),
                                                         CONCAT13(~((byte)((ulonglong)uVar10 >> 0x18
                                                                          ) ^
                                                                   (byte)((ulonglong)uVar8 >> 0x18))
                                                                  ,CONCAT12(~((byte)((ulonglong)
                                                                                     uVar10 >> 0x10)
                                                                             ^ (byte)((ulonglong)
                                                                                      uVar8 >> 0x10)
                                                                             ),CONCAT11(~((byte)((
                                                  ulonglong)uVar10 >> 8) ^
                                                  (byte)((ulonglong)uVar8 >> 8)),
                                                  ~((byte)uVar10 ^ (byte)uVar8))))))));
          puVar5 = (undefined8 *)(iVar7 + param_3 + 0xd8f0);
          uVar9 = puVar5[1];
          uVar8 = *puVar5;
          uVar12 = puVar2[1];
          uVar10 = *puVar2;
          puVar2 = (undefined8 *)(param_3 + 0x30 + iVar7);
          puVar5[1] = CONCAT17(~((byte)((ulonglong)uVar13 >> 0x38) ^
                                (byte)((ulonglong)uVar9 >> 0x38)),
                               CONCAT16(~((byte)((ulonglong)uVar13 >> 0x30) ^
                                         (byte)((ulonglong)uVar9 >> 0x30)),
                                        CONCAT15(~((byte)((ulonglong)uVar13 >> 0x28) ^
                                                  (byte)((ulonglong)uVar9 >> 0x28)),
                                                 CONCAT14(~((byte)((ulonglong)uVar13 >> 0x20) ^
                                                           (byte)((ulonglong)uVar9 >> 0x20)),
                                                          CONCAT13(~((byte)((ulonglong)uVar13 >>
                                                                           0x18) ^
                                                                    (byte)((ulonglong)uVar9 >> 0x18)
                                                                    ),CONCAT12(~((byte)((ulonglong)
                                                                                        uVar13 >>
                                                                                       0x10) ^
                                                                                (byte)((ulonglong)
                                                                                       uVar9 >> 0x10
                                                                                      )),
                                                                               CONCAT11(~((byte)((
                                                  ulonglong)uVar13 >> 8) ^
                                                  (byte)((ulonglong)uVar9 >> 8)),
                                                  ~((byte)uVar13 ^ (byte)uVar9))))))));
          *puVar5 = CONCAT17(~((byte)((ulonglong)uVar11 >> 0x38) ^ (byte)((ulonglong)uVar8 >> 0x38))
                             ,CONCAT16(~((byte)((ulonglong)uVar11 >> 0x30) ^
                                        (byte)((ulonglong)uVar8 >> 0x30)),
                                       CONCAT15(~((byte)((ulonglong)uVar11 >> 0x28) ^
                                                 (byte)((ulonglong)uVar8 >> 0x28)),
                                                CONCAT14(~((byte)((ulonglong)uVar11 >> 0x20) ^
                                                          (byte)((ulonglong)uVar8 >> 0x20)),
                                                         CONCAT13(~((byte)((ulonglong)uVar11 >> 0x18
                                                                          ) ^
                                                                   (byte)((ulonglong)uVar8 >> 0x18))
                                                                  ,CONCAT12(~((byte)((ulonglong)
                                                                                     uVar11 >> 0x10)
                                                                             ^ (byte)((ulonglong)
                                                                                      uVar8 >> 0x10)
                                                                             ),CONCAT11(~((byte)((
                                                  ulonglong)uVar11 >> 8) ^
                                                  (byte)((ulonglong)uVar8 >> 8)),
                                                  ~((byte)uVar11 ^ (byte)uVar8))))))));
          puVar5 = (undefined8 *)(param_3 + 0xd900 + iVar7);
          uVar9 = puVar5[1];
          uVar8 = *puVar5;
          uVar13 = puVar2[1];
          uVar11 = *puVar2;
          puVar5[1] = CONCAT17(~((byte)((ulonglong)uVar12 >> 0x38) ^
                                (byte)((ulonglong)uVar9 >> 0x38)),
                               CONCAT16(~((byte)((ulonglong)uVar12 >> 0x30) ^
                                         (byte)((ulonglong)uVar9 >> 0x30)),
                                        CONCAT15(~((byte)((ulonglong)uVar12 >> 0x28) ^
                                                  (byte)((ulonglong)uVar9 >> 0x28)),
                                                 CONCAT14(~((byte)((ulonglong)uVar12 >> 0x20) ^
                                                           (byte)((ulonglong)uVar9 >> 0x20)),
                                                          CONCAT13(~((byte)((ulonglong)uVar12 >>
                                                                           0x18) ^
                                                                    (byte)((ulonglong)uVar9 >> 0x18)
                                                                    ),CONCAT12(~((byte)((ulonglong)
                                                                                        uVar12 >>
                                                                                       0x10) ^
                                                                                (byte)((ulonglong)
                                                                                       uVar9 >> 0x10
                                                                                      )),
                                                                               CONCAT11(~((byte)((
                                                  ulonglong)uVar12 >> 8) ^
                                                  (byte)((ulonglong)uVar9 >> 8)),
                                                  ~((byte)uVar12 ^ (byte)uVar9))))))));
          *puVar5 = CONCAT17(~((byte)((ulonglong)uVar10 >> 0x38) ^ (byte)((ulonglong)uVar8 >> 0x38))
                             ,CONCAT16(~((byte)((ulonglong)uVar10 >> 0x30) ^
                                        (byte)((ulonglong)uVar8 >> 0x30)),
                                       CONCAT15(~((byte)((ulonglong)uVar10 >> 0x28) ^
                                                 (byte)((ulonglong)uVar8 >> 0x28)),
                                                CONCAT14(~((byte)((ulonglong)uVar10 >> 0x20) ^
                                                          (byte)((ulonglong)uVar8 >> 0x20)),
                                                         CONCAT13(~((byte)((ulonglong)uVar10 >> 0x18
                                                                          ) ^
                                                                   (byte)((ulonglong)uVar8 >> 0x18))
                                                                  ,CONCAT12(~((byte)((ulonglong)
                                                                                     uVar10 >> 0x10)
                                                                             ^ (byte)((ulonglong)
                                                                                      uVar8 >> 0x10)
                                                                             ),CONCAT11(~((byte)((
                                                  ulonglong)uVar10 >> 8) ^
                                                  (byte)((ulonglong)uVar8 >> 8)),
                                                  ~((byte)uVar10 ^ (byte)uVar8))))))));
          puVar5 = (undefined8 *)(param_3 + 0xd910 + iVar7);
          uVar9 = puVar5[1];
          uVar8 = *puVar5;
          iVar7 = iVar7 + 0x40;
          puVar5[1] = CONCAT17(~((byte)((ulonglong)uVar13 >> 0x38) ^
                                (byte)((ulonglong)uVar9 >> 0x38)),
                               CONCAT16(~((byte)((ulonglong)uVar13 >> 0x30) ^
                                         (byte)((ulonglong)uVar9 >> 0x30)),
                                        CONCAT15(~((byte)((ulonglong)uVar13 >> 0x28) ^
                                                  (byte)((ulonglong)uVar9 >> 0x28)),
                                                 CONCAT14(~((byte)((ulonglong)uVar13 >> 0x20) ^
                                                           (byte)((ulonglong)uVar9 >> 0x20)),
                                                          CONCAT13(~((byte)((ulonglong)uVar13 >>
                                                                           0x18) ^
                                                                    (byte)((ulonglong)uVar9 >> 0x18)
                                                                    ),CONCAT12(~((byte)((ulonglong)
                                                                                        uVar13 >>
                                                                                       0x10) ^
                                                                                (byte)((ulonglong)
                                                                                       uVar9 >> 0x10
                                                                                      )),
                                                                               CONCAT11(~((byte)((
                                                  ulonglong)uVar13 >> 8) ^
                                                  (byte)((ulonglong)uVar9 >> 8)),
                                                  ~((byte)uVar13 ^ (byte)uVar9))))))));
          *puVar5 = CONCAT17(~((byte)((ulonglong)uVar11 >> 0x38) ^ (byte)((ulonglong)uVar8 >> 0x38))
                             ,CONCAT16(~((byte)((ulonglong)uVar11 >> 0x30) ^
                                        (byte)((ulonglong)uVar8 >> 0x30)),
                                       CONCAT15(~((byte)((ulonglong)uVar11 >> 0x28) ^
                                                 (byte)((ulonglong)uVar8 >> 0x28)),
                                                CONCAT14(~((byte)((ulonglong)uVar11 >> 0x20) ^
                                                          (byte)((ulonglong)uVar8 >> 0x20)),
                                                         CONCAT13(~((byte)((ulonglong)uVar11 >> 0x18
                                                                          ) ^
                                                                   (byte)((ulonglong)uVar8 >> 0x18))
                                                                  ,CONCAT12(~((byte)((ulonglong)
                                                                                     uVar11 >> 0x10)
                                                                             ^ (byte)((ulonglong)
                                                                                      uVar8 >> 0x10)
                                                                             ),CONCAT11(~((byte)((
                                                  ulonglong)uVar11 >> 8) ^
                                                  (byte)((ulonglong)uVar8 >> 8)),
                                                  ~((byte)uVar11 ^ (byte)uVar8))))))));
          if (0x362f < uVar6) goto joined_r0x10063e38;
        } while( true );
      }
      do {
        iVar7 = uVar6 * 4;
        puVar3 = (uint *)((int)puVar1 + uVar6 * 4);
        uVar6 = uVar6 + 1;
        *puVar3 = *(uint *)(param_3 + iVar7) ^ *puVar3 ^ 0xffffffff;
joined_r0x10063e38:
      } while (uVar6 < 0x3638);
      *(char *)(param_3 + 0x1b200) = '\x01';
    }
  }
  return;
}

