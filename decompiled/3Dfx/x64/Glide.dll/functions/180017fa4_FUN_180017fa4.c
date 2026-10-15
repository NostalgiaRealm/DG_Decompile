/*
 * FUN_180017fa4 at 180017fa4
 * undefined8 __fastcall FUN_180017fa4(longlong param_1, uint param_2, uint param_3, uint param_4, int param_5, int param_6, int param_7, int param_8, int param_9, int param_10, int param_11, int param_12, int param_13)
 * Address ranges: 180017fa4-18001825e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180017fa4(longlong param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6,
             int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,int param_13
             )

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int iVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  int iVar35;
  uint uVar36;
  longlong lVar37;
  uint uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined8 uStack_170;
  
  uVar40 = 0;
  uVar39 = 0;
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    lVar7 = *(longlong *)(param_1 + 0xa0);
    if ((((lVar7 != 0) && (param_2 != 0xffffffff)) && (param_2 < *(uint *)(param_1 + 0xa8))) &&
       (lVar37 = (ulonglong)param_2 * 0xd0, uVar40 = uVar39,
       *(int *)(lVar37 + 0x4c + lVar7) < *(int *)(*(longlong *)(param_1 + 0x30) + 0x833))) {
      piVar1 = (int *)(lVar37 + 0x20 + lVar7);
      puVar2 = (undefined4 *)(lVar37 + 0x40 + lVar7);
      uVar16 = *puVar2;
      uVar17 = puVar2[3];
      uVar38 = *(uint *)(lVar37 + 8 + lVar7);
      if (param_3 != 0xffffffff) {
        uVar38 = param_3;
      }
      piVar3 = (int *)(lVar37 + 0x10 + lVar7);
      iVar18 = piVar3[1];
      uVar33 = *(undefined8 *)(piVar3 + 2);
      piVar4 = (int *)(lVar37 + 0x30 + lVar7);
      uVar34 = *(undefined8 *)(piVar4 + 2);
      uVar39 = *(undefined8 *)(lVar37 + lVar7);
      puVar5 = (undefined4 *)(lVar37 + 0x50 + lVar7);
      uVar41 = *puVar5;
      uVar42 = puVar5[1];
      uVar43 = puVar5[2];
      uVar44 = puVar5[3];
      puVar6 = (undefined8 *)(lVar37 + 0x60 + lVar7);
      uVar19 = *puVar6;
      uVar20 = puVar6[1];
      puVar6 = (undefined8 *)(lVar37 + 0x70 + lVar7);
      uVar21 = *puVar6;
      uVar22 = puVar6[1];
      puVar6 = (undefined8 *)(lVar37 + 0x80 + lVar7);
      uVar23 = *puVar6;
      uVar24 = puVar6[1];
      puVar6 = (undefined8 *)(lVar37 + 0x90 + lVar7);
      uVar25 = *puVar6;
      uVar26 = puVar6[1];
      puVar6 = (undefined8 *)(lVar37 + 0xa0 + lVar7);
      uVar27 = *puVar6;
      uVar28 = puVar6[1];
      puVar6 = (undefined8 *)(lVar37 + 0xb0 + lVar7);
      uVar29 = *puVar6;
      uVar30 = puVar6[1];
      puVar6 = (undefined8 *)(lVar37 + 0xc0 + lVar7);
      uVar31 = *puVar6;
      uVar32 = puVar6[1];
      uStack_170._4_4_ = (uint)((ulonglong)((undefined8 *)(lVar37 + lVar7))[1] >> 0x20);
      if (param_4 != 0xffffffff) {
        uStack_170._4_4_ = param_4;
      }
      iVar8 = *piVar1;
      if (param_5 != -1) {
        iVar8 = param_5;
      }
      iVar9 = piVar1[1];
      if (param_6 != -1) {
        iVar9 = param_6;
      }
      iVar10 = puVar2[1];
      if (param_7 != -1) {
        iVar10 = param_7;
      }
      iVar11 = puVar2[2];
      if (param_8 != -1) {
        iVar11 = param_8;
      }
      iVar12 = *piVar3;
      if (param_9 != -1) {
        iVar12 = param_9;
      }
      uStack_170 = CONCAT44(uStack_170._4_4_,uVar38);
      iVar13 = *piVar4;
      if (param_10 != -1) {
        iVar13 = param_10;
      }
      iVar14 = piVar4[1];
      if (param_11 != -1) {
        iVar14 = param_11;
      }
      iVar15 = piVar1[3];
      if (param_12 != -1) {
        iVar15 = param_12;
      }
      iVar35 = piVar1[2];
      if (param_13 != -1) {
        iVar35 = param_13;
      }
      uVar36 = FUN_180017d28(iVar11,iVar12);
      if ((uVar36 >> 0x10 == uVar38) && ((uVar36 & 0xffff) == uStack_170._4_4_)) {
        uVar40 = 1;
        *(undefined8 *)(lVar37 + lVar7) = uVar39;
        ((undefined8 *)(lVar37 + lVar7))[1] = uStack_170;
        puVar6 = (undefined8 *)(lVar37 + 0x10 + lVar7);
        *puVar6 = CONCAT44(iVar18,iVar12);
        puVar6[1] = uVar33;
        puVar6 = (undefined8 *)(lVar37 + 0x20 + lVar7);
        *puVar6 = CONCAT44(iVar9,iVar8);
        puVar6[1] = CONCAT44(iVar15,iVar35);
        puVar6 = (undefined8 *)(lVar37 + 0x30 + lVar7);
        *puVar6 = CONCAT44(iVar14,iVar13);
        puVar6[1] = uVar34;
        puVar6 = (undefined8 *)(lVar37 + 0x40 + lVar7);
        *puVar6 = CONCAT44(iVar10,uVar16);
        puVar6[1] = CONCAT44(uVar17,iVar11);
        puVar2 = (undefined4 *)(lVar37 + 0x50 + lVar7);
        *puVar2 = uVar41;
        puVar2[1] = uVar42;
        puVar2[2] = uVar43;
        puVar2[3] = uVar44;
        puVar6 = (undefined8 *)(lVar37 + 0x60 + lVar7);
        *puVar6 = uVar19;
        puVar6[1] = uVar20;
        puVar6 = (undefined8 *)(lVar37 + 0x70 + lVar7);
        *puVar6 = uVar21;
        puVar6[1] = uVar22;
        puVar6 = (undefined8 *)(lVar37 + 0x80 + lVar7);
        *puVar6 = uVar23;
        puVar6[1] = uVar24;
        puVar6 = (undefined8 *)(lVar37 + 0x90 + lVar7);
        *puVar6 = uVar25;
        puVar6[1] = uVar26;
        puVar6 = (undefined8 *)(lVar37 + 0xa0 + lVar7);
        *puVar6 = uVar27;
        puVar6[1] = uVar28;
        puVar6 = (undefined8 *)(lVar37 + 0xb0 + lVar7);
        *puVar6 = uVar29;
        puVar6[1] = uVar30;
        puVar6 = (undefined8 *)(lVar37 + 0xc0 + lVar7);
        *puVar6 = uVar31;
        puVar6[1] = uVar32;
      }
    }
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return uVar40;
}

