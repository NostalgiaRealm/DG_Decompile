/*
 * FUN_180058594 at 180058594
 * undefined FUN_180058594(void)
 * Address ranges: 180058594-1800586cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180058594(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar4;
  
  (**(code **)(*param_1 + 0x1d8))(param_1,0);
  if (*(char *)(param_3 + 0x1ebec) == '\0') {
    puVar1 = (undefined8 *)(param_3 + 0xf5d0);
    puVar3 = puVar1;
    do {
      puVar4 = puVar3;
      puVar3 = puVar4 + 4;
      puVar4[1] = 0xffffffffffffffff;
      *puVar4 = 0xffffffffffffffff;
      puVar4[3] = 0xffffffffffffffff;
      puVar4[2] = 0xffffffffffffffff;
    } while (puVar3 != (undefined8 *)(param_3 + 0x1eb90));
    puVar4[5] = 0xffffffffffffffff;
    *puVar3 = 0xffffffffffffffff;
    uVar2 = 0;
    if (((undefined8 *)(param_3 + 0xf5cc) < puVar1) || (param_3 + 0x1eb9c < param_3)) {
      lVar5 = 0;
      do {
        lVar6 = lVar5 * 4;
        uVar10 = ((undefined8 *)(lVar6 + param_3))[1];
        uVar9 = *(undefined8 *)(lVar6 + param_3);
        lVar5 = lVar5 + 0x10;
        uVar8 = ((undefined8 *)(lVar6 + (longlong)puVar1))[1];
        uVar7 = *(undefined8 *)(lVar6 + (longlong)puVar1);
        ((undefined8 *)(lVar6 + (longlong)puVar1))[1] =
             CONCAT17(~((byte)((ulonglong)uVar10 >> 0x38) ^ (byte)((ulonglong)uVar8 >> 0x38)),
                      CONCAT16(~((byte)((ulonglong)uVar10 >> 0x30) ^
                                (byte)((ulonglong)uVar8 >> 0x30)),
                               CONCAT15(~((byte)((ulonglong)uVar10 >> 0x28) ^
                                         (byte)((ulonglong)uVar8 >> 0x28)),
                                        CONCAT14(~((byte)((ulonglong)uVar10 >> 0x20) ^
                                                  (byte)((ulonglong)uVar8 >> 0x20)),
                                                 CONCAT13(~((byte)((ulonglong)uVar10 >> 0x18) ^
                                                           (byte)((ulonglong)uVar8 >> 0x18)),
                                                          CONCAT12(~((byte)((ulonglong)uVar10 >>
                                                                           0x10) ^
                                                                    (byte)((ulonglong)uVar8 >> 0x10)
                                                                    ),CONCAT11(~((byte)((ulonglong)
                                                                                        uVar10 >> 8)
                                                                                ^ (byte)((ulonglong)
                                                                                         uVar8 >> 8)
                                                                                ),~((byte)uVar10 ^
                                                                                   (byte)uVar8))))))
                              ));
        *(undefined8 *)(lVar6 + (longlong)puVar1) =
             CONCAT17(~((byte)((ulonglong)uVar9 >> 0x38) ^ (byte)((ulonglong)uVar7 >> 0x38)),
                      CONCAT16(~((byte)((ulonglong)uVar9 >> 0x30) ^ (byte)((ulonglong)uVar7 >> 0x30)
                                ),CONCAT15(~((byte)((ulonglong)uVar9 >> 0x28) ^
                                            (byte)((ulonglong)uVar7 >> 0x28)),
                                           CONCAT14(~((byte)((ulonglong)uVar9 >> 0x20) ^
                                                     (byte)((ulonglong)uVar7 >> 0x20)),
                                                    CONCAT13(~((byte)((ulonglong)uVar9 >> 0x18) ^
                                                              (byte)((ulonglong)uVar7 >> 0x18)),
                                                             CONCAT12(~((byte)((ulonglong)uVar9 >>
                                                                              0x10) ^
                                                                       (byte)((ulonglong)uVar7 >>
                                                                             0x10)),
                                                                      CONCAT11(~((byte)((ulonglong)
                                                                                        uVar9 >> 8)
                                                                                ^ (byte)((ulonglong)
                                                                                         uVar7 >> 8)
                                                                                ),~((byte)uVar9 ^
                                                                                   (byte)uVar7))))))
                              ));
        lVar6 = (ulonglong)(uVar2 + 4) * 4;
        uVar10 = ((undefined8 *)(lVar6 + param_3))[1];
        uVar9 = *(undefined8 *)(lVar6 + param_3);
        uVar8 = ((undefined8 *)(lVar6 + (longlong)puVar1))[1];
        uVar7 = *(undefined8 *)(lVar6 + (longlong)puVar1);
        ((undefined8 *)(lVar6 + (longlong)puVar1))[1] =
             CONCAT17(~((byte)((ulonglong)uVar10 >> 0x38) ^ (byte)((ulonglong)uVar8 >> 0x38)),
                      CONCAT16(~((byte)((ulonglong)uVar10 >> 0x30) ^
                                (byte)((ulonglong)uVar8 >> 0x30)),
                               CONCAT15(~((byte)((ulonglong)uVar10 >> 0x28) ^
                                         (byte)((ulonglong)uVar8 >> 0x28)),
                                        CONCAT14(~((byte)((ulonglong)uVar10 >> 0x20) ^
                                                  (byte)((ulonglong)uVar8 >> 0x20)),
                                                 CONCAT13(~((byte)((ulonglong)uVar10 >> 0x18) ^
                                                           (byte)((ulonglong)uVar8 >> 0x18)),
                                                          CONCAT12(~((byte)((ulonglong)uVar10 >>
                                                                           0x10) ^
                                                                    (byte)((ulonglong)uVar8 >> 0x10)
                                                                    ),CONCAT11(~((byte)((ulonglong)
                                                                                        uVar10 >> 8)
                                                                                ^ (byte)((ulonglong)
                                                                                         uVar8 >> 8)
                                                                                ),~((byte)uVar10 ^
                                                                                   (byte)uVar8))))))
                              ));
        *(undefined8 *)(lVar6 + (longlong)puVar1) =
             CONCAT17(~((byte)((ulonglong)uVar9 >> 0x38) ^ (byte)((ulonglong)uVar7 >> 0x38)),
                      CONCAT16(~((byte)((ulonglong)uVar9 >> 0x30) ^ (byte)((ulonglong)uVar7 >> 0x30)
                                ),CONCAT15(~((byte)((ulonglong)uVar9 >> 0x28) ^
                                            (byte)((ulonglong)uVar7 >> 0x28)),
                                           CONCAT14(~((byte)((ulonglong)uVar9 >> 0x20) ^
                                                     (byte)((ulonglong)uVar7 >> 0x20)),
                                                    CONCAT13(~((byte)((ulonglong)uVar9 >> 0x18) ^
                                                              (byte)((ulonglong)uVar7 >> 0x18)),
                                                             CONCAT12(~((byte)((ulonglong)uVar9 >>
                                                                              0x10) ^
                                                                       (byte)((ulonglong)uVar7 >>
                                                                             0x10)),
                                                                      CONCAT11(~((byte)((ulonglong)
                                                                                        uVar9 >> 8)
                                                                                ^ (byte)((ulonglong)
                                                                                         uVar7 >> 8)
                                                                                ),~((byte)uVar9 ^
                                                                                   (byte)uVar7))))))
                              ));
        lVar6 = (ulonglong)(uVar2 + 8) * 4;
        uVar10 = ((undefined8 *)(lVar6 + param_3))[1];
        uVar9 = *(undefined8 *)(lVar6 + param_3);
        uVar8 = ((undefined8 *)(lVar6 + (longlong)puVar1))[1];
        uVar7 = *(undefined8 *)(lVar6 + (longlong)puVar1);
        ((undefined8 *)(lVar6 + (longlong)puVar1))[1] =
             CONCAT17(~((byte)((ulonglong)uVar10 >> 0x38) ^ (byte)((ulonglong)uVar8 >> 0x38)),
                      CONCAT16(~((byte)((ulonglong)uVar10 >> 0x30) ^
                                (byte)((ulonglong)uVar8 >> 0x30)),
                               CONCAT15(~((byte)((ulonglong)uVar10 >> 0x28) ^
                                         (byte)((ulonglong)uVar8 >> 0x28)),
                                        CONCAT14(~((byte)((ulonglong)uVar10 >> 0x20) ^
                                                  (byte)((ulonglong)uVar8 >> 0x20)),
                                                 CONCAT13(~((byte)((ulonglong)uVar10 >> 0x18) ^
                                                           (byte)((ulonglong)uVar8 >> 0x18)),
                                                          CONCAT12(~((byte)((ulonglong)uVar10 >>
                                                                           0x10) ^
                                                                    (byte)((ulonglong)uVar8 >> 0x10)
                                                                    ),CONCAT11(~((byte)((ulonglong)
                                                                                        uVar10 >> 8)
                                                                                ^ (byte)((ulonglong)
                                                                                         uVar8 >> 8)
                                                                                ),~((byte)uVar10 ^
                                                                                   (byte)uVar8))))))
                              ));
        *(undefined8 *)(lVar6 + (longlong)puVar1) =
             CONCAT17(~((byte)((ulonglong)uVar9 >> 0x38) ^ (byte)((ulonglong)uVar7 >> 0x38)),
                      CONCAT16(~((byte)((ulonglong)uVar9 >> 0x30) ^ (byte)((ulonglong)uVar7 >> 0x30)
                                ),CONCAT15(~((byte)((ulonglong)uVar9 >> 0x28) ^
                                            (byte)((ulonglong)uVar7 >> 0x28)),
                                           CONCAT14(~((byte)((ulonglong)uVar9 >> 0x20) ^
                                                     (byte)((ulonglong)uVar7 >> 0x20)),
                                                    CONCAT13(~((byte)((ulonglong)uVar9 >> 0x18) ^
                                                              (byte)((ulonglong)uVar7 >> 0x18)),
                                                             CONCAT12(~((byte)((ulonglong)uVar9 >>
                                                                              0x10) ^
                                                                       (byte)((ulonglong)uVar7 >>
                                                                             0x10)),
                                                                      CONCAT11(~((byte)((ulonglong)
                                                                                        uVar9 >> 8)
                                                                                ^ (byte)((ulonglong)
                                                                                         uVar7 >> 8)
                                                                                ),~((byte)uVar9 ^
                                                                                   (byte)uVar7))))))
                              ));
        lVar6 = (ulonglong)(uVar2 + 0xc) * 4;
        uVar10 = ((undefined8 *)(lVar6 + param_3))[1];
        uVar9 = *(undefined8 *)(lVar6 + param_3);
        uVar2 = uVar2 + 0x10;
        uVar8 = ((undefined8 *)(lVar6 + (longlong)puVar1))[1];
        uVar7 = *(undefined8 *)(lVar6 + (longlong)puVar1);
        ((undefined8 *)(lVar6 + (longlong)puVar1))[1] =
             CONCAT17(~((byte)((ulonglong)uVar10 >> 0x38) ^ (byte)((ulonglong)uVar8 >> 0x38)),
                      CONCAT16(~((byte)((ulonglong)uVar10 >> 0x30) ^
                                (byte)((ulonglong)uVar8 >> 0x30)),
                               CONCAT15(~((byte)((ulonglong)uVar10 >> 0x28) ^
                                         (byte)((ulonglong)uVar8 >> 0x28)),
                                        CONCAT14(~((byte)((ulonglong)uVar10 >> 0x20) ^
                                                  (byte)((ulonglong)uVar8 >> 0x20)),
                                                 CONCAT13(~((byte)((ulonglong)uVar10 >> 0x18) ^
                                                           (byte)((ulonglong)uVar8 >> 0x18)),
                                                          CONCAT12(~((byte)((ulonglong)uVar10 >>
                                                                           0x10) ^
                                                                    (byte)((ulonglong)uVar8 >> 0x10)
                                                                    ),CONCAT11(~((byte)((ulonglong)
                                                                                        uVar10 >> 8)
                                                                                ^ (byte)((ulonglong)
                                                                                         uVar8 >> 8)
                                                                                ),~((byte)uVar10 ^
                                                                                   (byte)uVar8))))))
                              ));
        *(undefined8 *)(lVar6 + (longlong)puVar1) =
             CONCAT17(~((byte)((ulonglong)uVar9 >> 0x38) ^ (byte)((ulonglong)uVar7 >> 0x38)),
                      CONCAT16(~((byte)((ulonglong)uVar9 >> 0x30) ^ (byte)((ulonglong)uVar7 >> 0x30)
                                ),CONCAT15(~((byte)((ulonglong)uVar9 >> 0x28) ^
                                            (byte)((ulonglong)uVar7 >> 0x28)),
                                           CONCAT14(~((byte)((ulonglong)uVar9 >> 0x20) ^
                                                     (byte)((ulonglong)uVar7 >> 0x20)),
                                                    CONCAT13(~((byte)((ulonglong)uVar9 >> 0x18) ^
                                                              (byte)((ulonglong)uVar7 >> 0x18)),
                                                             CONCAT12(~((byte)((ulonglong)uVar9 >>
                                                                              0x10) ^
                                                                       (byte)((ulonglong)uVar7 >>
                                                                             0x10)),
                                                                      CONCAT11(~((byte)((ulonglong)
                                                                                        uVar9 >> 8)
                                                                                ^ (byte)((ulonglong)
                                                                                         uVar7 >> 8)
                                                                                ),~((byte)uVar9 ^
                                                                                   (byte)uVar7))))))
                              ));
        if (0x3d6f < uVar2) goto joined_r0x000180058698;
      } while( true );
    }
    do {
      *(uint *)((longlong)puVar1 + (ulonglong)uVar2 * 4) =
           *(uint *)(param_3 + (ulonglong)uVar2 * 4) ^
           *(uint *)((longlong)puVar1 + (ulonglong)uVar2 * 4) ^ 0xffffffff;
      uVar2 = uVar2 + 1;
joined_r0x000180058698:
    } while (uVar2 < 0x3d74);
    *(undefined1 *)(param_3 + 0x1ebec) = 1;
  }
  return;
}

