/*
 * FUN_180168740 at 180168740
 * undefined FUN_180168740(void)
 * Address ranges: 180168740-180168743
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180168740(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar7;
  code *extraout_x11;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar2,0);
    if (*(char *)(param_3 + 0x1ebec) == '\0') {
      puVar1 = (undefined8 *)(param_3 + 0xf5d0);
      puVar5 = puVar1;
      do {
        puVar6 = puVar5;
        puVar5 = puVar6 + 4;
        puVar6[1] = 0xffffffffffffffff;
        *puVar6 = 0xffffffffffffffff;
        puVar6[3] = 0xffffffffffffffff;
        puVar6[2] = 0xffffffffffffffff;
      } while (puVar5 != (undefined8 *)(param_3 + 0x1eb90));
      puVar6[5] = 0xffffffffffffffff;
      *puVar5 = 0xffffffffffffffff;
      uVar4 = 0;
      if (((undefined8 *)(param_3 + 0xf5cc) < puVar1) || (param_3 + 0x1eb9c < param_3)) {
        lVar7 = 0;
        do {
          lVar3 = lVar7 * 4;
          uVar8 = ((undefined8 *)(lVar3 + param_3))[1];
          uVar2 = *(undefined8 *)(lVar3 + param_3);
          lVar7 = lVar7 + 0x10;
          uVar10 = ((undefined8 *)(lVar3 + (longlong)puVar1))[1];
          uVar9 = *(undefined8 *)(lVar3 + (longlong)puVar1);
          ((undefined8 *)(lVar3 + (longlong)puVar1))[1] =
               CONCAT17(~((byte)((ulonglong)uVar8 >> 0x38) ^ (byte)((ulonglong)uVar10 >> 0x38)),
                        CONCAT16(~((byte)((ulonglong)uVar8 >> 0x30) ^
                                  (byte)((ulonglong)uVar10 >> 0x30)),
                                 CONCAT15(~((byte)((ulonglong)uVar8 >> 0x28) ^
                                           (byte)((ulonglong)uVar10 >> 0x28)),
                                          CONCAT14(~((byte)((ulonglong)uVar8 >> 0x20) ^
                                                    (byte)((ulonglong)uVar10 >> 0x20)),
                                                   CONCAT13(~((byte)((ulonglong)uVar8 >> 0x18) ^
                                                             (byte)((ulonglong)uVar10 >> 0x18)),
                                                            CONCAT12(~((byte)((ulonglong)uVar8 >>
                                                                             0x10) ^
                                                                      (byte)((ulonglong)uVar10 >>
                                                                            0x10)),
                                                                     CONCAT11(~((byte)((ulonglong)
                                                                                       uVar8 >> 8) ^
                                                                               (byte)((ulonglong)
                                                                                      uVar10 >> 8)),
                                                                              ~((byte)uVar8 ^
                                                                               (byte)uVar10))))))));
          *(undefined8 *)(lVar3 + (longlong)puVar1) =
               CONCAT17(~((byte)((ulonglong)uVar2 >> 0x38) ^ (byte)((ulonglong)uVar9 >> 0x38)),
                        CONCAT16(~((byte)((ulonglong)uVar2 >> 0x30) ^
                                  (byte)((ulonglong)uVar9 >> 0x30)),
                                 CONCAT15(~((byte)((ulonglong)uVar2 >> 0x28) ^
                                           (byte)((ulonglong)uVar9 >> 0x28)),
                                          CONCAT14(~((byte)((ulonglong)uVar2 >> 0x20) ^
                                                    (byte)((ulonglong)uVar9 >> 0x20)),
                                                   CONCAT13(~((byte)((ulonglong)uVar2 >> 0x18) ^
                                                             (byte)((ulonglong)uVar9 >> 0x18)),
                                                            CONCAT12(~((byte)((ulonglong)uVar2 >>
                                                                             0x10) ^
                                                                      (byte)((ulonglong)uVar9 >>
                                                                            0x10)),
                                                                     CONCAT11(~((byte)((ulonglong)
                                                                                       uVar2 >> 8) ^
                                                                               (byte)((ulonglong)
                                                                                      uVar9 >> 8)),
                                                                              ~((byte)uVar2 ^
                                                                               (byte)uVar9))))))));
          lVar3 = (ulonglong)(uVar4 + 4) * 4;
          uVar8 = ((undefined8 *)(lVar3 + param_3))[1];
          uVar2 = *(undefined8 *)(lVar3 + param_3);
          uVar10 = ((undefined8 *)(lVar3 + (longlong)puVar1))[1];
          uVar9 = *(undefined8 *)(lVar3 + (longlong)puVar1);
          ((undefined8 *)(lVar3 + (longlong)puVar1))[1] =
               CONCAT17(~((byte)((ulonglong)uVar8 >> 0x38) ^ (byte)((ulonglong)uVar10 >> 0x38)),
                        CONCAT16(~((byte)((ulonglong)uVar8 >> 0x30) ^
                                  (byte)((ulonglong)uVar10 >> 0x30)),
                                 CONCAT15(~((byte)((ulonglong)uVar8 >> 0x28) ^
                                           (byte)((ulonglong)uVar10 >> 0x28)),
                                          CONCAT14(~((byte)((ulonglong)uVar8 >> 0x20) ^
                                                    (byte)((ulonglong)uVar10 >> 0x20)),
                                                   CONCAT13(~((byte)((ulonglong)uVar8 >> 0x18) ^
                                                             (byte)((ulonglong)uVar10 >> 0x18)),
                                                            CONCAT12(~((byte)((ulonglong)uVar8 >>
                                                                             0x10) ^
                                                                      (byte)((ulonglong)uVar10 >>
                                                                            0x10)),
                                                                     CONCAT11(~((byte)((ulonglong)
                                                                                       uVar8 >> 8) ^
                                                                               (byte)((ulonglong)
                                                                                      uVar10 >> 8)),
                                                                              ~((byte)uVar8 ^
                                                                               (byte)uVar10))))))));
          *(undefined8 *)(lVar3 + (longlong)puVar1) =
               CONCAT17(~((byte)((ulonglong)uVar2 >> 0x38) ^ (byte)((ulonglong)uVar9 >> 0x38)),
                        CONCAT16(~((byte)((ulonglong)uVar2 >> 0x30) ^
                                  (byte)((ulonglong)uVar9 >> 0x30)),
                                 CONCAT15(~((byte)((ulonglong)uVar2 >> 0x28) ^
                                           (byte)((ulonglong)uVar9 >> 0x28)),
                                          CONCAT14(~((byte)((ulonglong)uVar2 >> 0x20) ^
                                                    (byte)((ulonglong)uVar9 >> 0x20)),
                                                   CONCAT13(~((byte)((ulonglong)uVar2 >> 0x18) ^
                                                             (byte)((ulonglong)uVar9 >> 0x18)),
                                                            CONCAT12(~((byte)((ulonglong)uVar2 >>
                                                                             0x10) ^
                                                                      (byte)((ulonglong)uVar9 >>
                                                                            0x10)),
                                                                     CONCAT11(~((byte)((ulonglong)
                                                                                       uVar2 >> 8) ^
                                                                               (byte)((ulonglong)
                                                                                      uVar9 >> 8)),
                                                                              ~((byte)uVar2 ^
                                                                               (byte)uVar9))))))));
          lVar3 = (ulonglong)(uVar4 + 8) * 4;
          uVar8 = ((undefined8 *)(lVar3 + param_3))[1];
          uVar2 = *(undefined8 *)(lVar3 + param_3);
          uVar10 = ((undefined8 *)(lVar3 + (longlong)puVar1))[1];
          uVar9 = *(undefined8 *)(lVar3 + (longlong)puVar1);
          ((undefined8 *)(lVar3 + (longlong)puVar1))[1] =
               CONCAT17(~((byte)((ulonglong)uVar8 >> 0x38) ^ (byte)((ulonglong)uVar10 >> 0x38)),
                        CONCAT16(~((byte)((ulonglong)uVar8 >> 0x30) ^
                                  (byte)((ulonglong)uVar10 >> 0x30)),
                                 CONCAT15(~((byte)((ulonglong)uVar8 >> 0x28) ^
                                           (byte)((ulonglong)uVar10 >> 0x28)),
                                          CONCAT14(~((byte)((ulonglong)uVar8 >> 0x20) ^
                                                    (byte)((ulonglong)uVar10 >> 0x20)),
                                                   CONCAT13(~((byte)((ulonglong)uVar8 >> 0x18) ^
                                                             (byte)((ulonglong)uVar10 >> 0x18)),
                                                            CONCAT12(~((byte)((ulonglong)uVar8 >>
                                                                             0x10) ^
                                                                      (byte)((ulonglong)uVar10 >>
                                                                            0x10)),
                                                                     CONCAT11(~((byte)((ulonglong)
                                                                                       uVar8 >> 8) ^
                                                                               (byte)((ulonglong)
                                                                                      uVar10 >> 8)),
                                                                              ~((byte)uVar8 ^
                                                                               (byte)uVar10))))))));
          *(undefined8 *)(lVar3 + (longlong)puVar1) =
               CONCAT17(~((byte)((ulonglong)uVar2 >> 0x38) ^ (byte)((ulonglong)uVar9 >> 0x38)),
                        CONCAT16(~((byte)((ulonglong)uVar2 >> 0x30) ^
                                  (byte)((ulonglong)uVar9 >> 0x30)),
                                 CONCAT15(~((byte)((ulonglong)uVar2 >> 0x28) ^
                                           (byte)((ulonglong)uVar9 >> 0x28)),
                                          CONCAT14(~((byte)((ulonglong)uVar2 >> 0x20) ^
                                                    (byte)((ulonglong)uVar9 >> 0x20)),
                                                   CONCAT13(~((byte)((ulonglong)uVar2 >> 0x18) ^
                                                             (byte)((ulonglong)uVar9 >> 0x18)),
                                                            CONCAT12(~((byte)((ulonglong)uVar2 >>
                                                                             0x10) ^
                                                                      (byte)((ulonglong)uVar9 >>
                                                                            0x10)),
                                                                     CONCAT11(~((byte)((ulonglong)
                                                                                       uVar2 >> 8) ^
                                                                               (byte)((ulonglong)
                                                                                      uVar9 >> 8)),
                                                                              ~((byte)uVar2 ^
                                                                               (byte)uVar9))))))));
          lVar3 = (ulonglong)(uVar4 + 0xc) * 4;
          uVar8 = ((undefined8 *)(lVar3 + param_3))[1];
          uVar2 = *(undefined8 *)(lVar3 + param_3);
          uVar4 = uVar4 + 0x10;
          uVar10 = ((undefined8 *)(lVar3 + (longlong)puVar1))[1];
          uVar9 = *(undefined8 *)(lVar3 + (longlong)puVar1);
          ((undefined8 *)(lVar3 + (longlong)puVar1))[1] =
               CONCAT17(~((byte)((ulonglong)uVar8 >> 0x38) ^ (byte)((ulonglong)uVar10 >> 0x38)),
                        CONCAT16(~((byte)((ulonglong)uVar8 >> 0x30) ^
                                  (byte)((ulonglong)uVar10 >> 0x30)),
                                 CONCAT15(~((byte)((ulonglong)uVar8 >> 0x28) ^
                                           (byte)((ulonglong)uVar10 >> 0x28)),
                                          CONCAT14(~((byte)((ulonglong)uVar8 >> 0x20) ^
                                                    (byte)((ulonglong)uVar10 >> 0x20)),
                                                   CONCAT13(~((byte)((ulonglong)uVar8 >> 0x18) ^
                                                             (byte)((ulonglong)uVar10 >> 0x18)),
                                                            CONCAT12(~((byte)((ulonglong)uVar8 >>
                                                                             0x10) ^
                                                                      (byte)((ulonglong)uVar10 >>
                                                                            0x10)),
                                                                     CONCAT11(~((byte)((ulonglong)
                                                                                       uVar8 >> 8) ^
                                                                               (byte)((ulonglong)
                                                                                      uVar10 >> 8)),
                                                                              ~((byte)uVar8 ^
                                                                               (byte)uVar10))))))));
          *(undefined8 *)(lVar3 + (longlong)puVar1) =
               CONCAT17(~((byte)((ulonglong)uVar2 >> 0x38) ^ (byte)((ulonglong)uVar9 >> 0x38)),
                        CONCAT16(~((byte)((ulonglong)uVar2 >> 0x30) ^
                                  (byte)((ulonglong)uVar9 >> 0x30)),
                                 CONCAT15(~((byte)((ulonglong)uVar2 >> 0x28) ^
                                           (byte)((ulonglong)uVar9 >> 0x28)),
                                          CONCAT14(~((byte)((ulonglong)uVar2 >> 0x20) ^
                                                    (byte)((ulonglong)uVar9 >> 0x20)),
                                                   CONCAT13(~((byte)((ulonglong)uVar2 >> 0x18) ^
                                                             (byte)((ulonglong)uVar9 >> 0x18)),
                                                            CONCAT12(~((byte)((ulonglong)uVar2 >>
                                                                             0x10) ^
                                                                      (byte)((ulonglong)uVar9 >>
                                                                            0x10)),
                                                                     CONCAT11(~((byte)((ulonglong)
                                                                                       uVar2 >> 8) ^
                                                                               (byte)((ulonglong)
                                                                                      uVar9 >> 8)),
                                                                              ~((byte)uVar2 ^
                                                                               (byte)uVar9))))))));
          if (0x3d6f < uVar4) goto joined_r0x00018016885c;
        } while( true );
      }
      do {
        *(uint *)((longlong)puVar1 + (ulonglong)uVar4 * 4) =
             *(uint *)(param_3 + (ulonglong)uVar4 * 4) ^
             *(uint *)((longlong)puVar1 + (ulonglong)uVar4 * 4) ^ 0xffffffff;
        uVar4 = uVar4 + 1;
joined_r0x00018016885c:
      } while (uVar4 < 0x3d74);
      *(undefined1 *)(param_3 + 0x1ebec) = 1;
    }
  }
  return;
}

