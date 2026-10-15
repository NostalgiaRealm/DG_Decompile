/*
 * FUN_1001da80 at 1001da80
 * undefined4 __thiscall FUN_1001da80(void * this, uint param_1, char param_2, char param_3)
 * Address ranges: 1001da80-1001e0a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1001da80(void *this,uint param_1,char param_2,char param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  uint uVar8;
  int in_EAX;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  int extraout_ECX;
  undefined4 *puVar17;
  undefined4 *puVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  int iStack_24;
  undefined8 local_20;
  void *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if ((*(char *)((int)this + 0x1d38) == '\0') && (param_3 == '\0')) goto LAB_1001e09e;
  if (*(char *)((int)this + 0x1905) == '\0') {
    if (*(int *)((int)this + 0x18f4) == 0) {
LAB_1001dad8:
      bVar7 = false;
    }
    else {
      iVar9 = 0x219c;
      if (*(int *)((int)this + 0x1e0c) == 0) {
        iVar9 = 0x2174;
      }
      if (*(int *)(iVar9 + (int)this) != 0) goto LAB_1001dad8;
      bVar7 = true;
    }
    uVar13 = *(uint *)((int)this + 0x4ac);
    uVar21 = *(uint *)((int)this + 0x4a8);
    if ((*(uint *)((int)this + 0x1834) & (1 << ((byte)param_1 & 0x1f)) - 1U) == 0) {
      local_20 = 0;
      local_20._4_4_ = 0;
      uVar10 = local_20._4_4_;
    }
    else {
      uVar10 = uVar13 & 0x20000000;
    }
    if (*(char *)((int)this + 0x1901) == '\0') {
      uVar11 = 0x380000;
    }
    else {
      uVar11 = uVar13 & 0x380000;
    }
    if (bVar7) {
      uVar12 = uVar13 & 0x800000;
    }
    else {
      local_20 = 0;
      local_20._4_4_ = 0;
      uVar12 = local_20._4_4_;
    }
    if (*(char *)((int)this + 0x191e) == '\0') {
      local_20 = 0;
      local_20._4_4_ = 0;
      uVar20 = local_20._4_4_;
    }
    else {
      uVar20 = uVar13 & 0x8000000;
    }
    uVar8 = uVar13 & 0xc747ffff;
    if ((uVar13 & 0x1000000) == 0) {
      uVar8 = uVar13 & 0xc147ffff;
    }
    if (param_2 == '\0') {
      _param_3 = uVar21 & 0xfdffffff;
LAB_1001dbf8:
      _param_3 = _param_3 & 0x3ffffff;
      uVar8 = uVar8 & 0xfffc0100;
    }
    else {
      _param_3 = (uVar21 >> 0x19) << 0x19;
      _param_3 = (_param_3 ^ uVar21) & 0xfdffffff ^ _param_3;
      if ((uVar21 >> 0x19 & 1) == 0) goto LAB_1001dbf8;
    }
    uVar20 = uVar8 | uVar10 | uVar11 | uVar12 | uVar20;
    if ((*(int *)((int)this + 0x1dfc) == *(int *)(*(int *)((int)this + 0x1d60) + 0x90)) ||
       (*(int *)((int)this + 0x1dfc) == *(int *)(*(int *)((int)this + 0x1d60) + 0xa8))) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    iVar9 = 0;
    if (bVar7) {
      uVar2 = CONCAT44(uStack_30,uStack_34);
      uVar13 = _param_3;
    }
    else {
      local_18 = this;
      local_c = uVar20;
      FUN_10019dda((void *)((int)this + 0x3ec),param_1,&local_58);
      piVar14 = (int *)((int)this + 0x1d94);
      uVar13 = FUN_1001a1e9(piVar14,(int)&local_58);
      if ((uVar13 == *(uint *)((int)this + 0x1d9c)) ||
         (uVar13 = FUN_10019cdc((void *)(*(int *)((int)this + 0x1d98) + uVar13 * 0x40),&local_58),
         (char)uVar13 == '\0')) {
        puVar17 = (undefined4 *)0x0;
      }
      else {
        puVar17 = (undefined4 *)(extraout_ECX + 0x38);
      }
      if (puVar17 == (undefined4 *)0x0) {
        puVar17 = (undefined4 *)FUN_1005c755(0x80);
        if (puVar17 == (undefined4 *)0x0) goto LAB_1001df59;
        iVar9 = *(int *)((int)this + 0x1d8c);
        iVar16 = *(int *)((int)this + 0x1d88);
        puVar17[2] = 0;
        puVar17[3] = 0;
        *puVar17 = &PTR_LAB_1005ed68;
        puVar17[4] = 0;
        puVar17[5] = 0;
        puVar17[6] = 0;
        puVar17[7] = 0;
        puVar17[10] = iVar9;
        puVar17[0xc] = 0;
        puVar17[8] = iVar9 * 0x16c0 + 0x1d00 + iVar16;
        puVar17[9] = iVar16;
        *(undefined1 *)(puVar17 + 0xe) = 0;
        puVar17[0xd] = *(undefined4 *)(iVar16 + 0x38 + iVar9 * 0x28);
        uVar4 = *(undefined4 *)((int)this + 0x3f0);
        uVar5 = *(undefined4 *)((int)this + 0x3f4);
        uVar6 = *(undefined4 *)((int)this + 0x3f8);
        local_14 = 0xff000000;
        puVar17[0x10] = *(undefined4 *)((int)this + 0x3ec);
        puVar17[0x11] = uVar4;
        puVar17[0x12] = uVar5;
        puVar17[0x13] = uVar6;
        uVar4 = *(undefined4 *)((int)this + 0x400);
        uVar5 = *(undefined4 *)((int)this + 0x404);
        uVar6 = *(undefined4 *)((int)this + 0x408);
        puVar17[0x14] = *(undefined4 *)((int)this + 0x3fc);
        puVar17[0x15] = uVar4;
        puVar17[0x16] = uVar5;
        puVar17[0x17] = uVar6;
        uVar4 = *(undefined4 *)((int)this + 0x410);
        uVar5 = *(undefined4 *)((int)this + 0x414);
        uVar6 = *(undefined4 *)((int)this + 0x418);
        puVar17[0x18] = *(undefined4 *)((int)this + 0x40c);
        puVar17[0x19] = uVar4;
        puVar17[0x1a] = uVar5;
        puVar17[0x1b] = uVar6;
        uVar4 = *(undefined4 *)((int)this + 0x420);
        puVar17[0x1c] = *(undefined4 *)((int)this + 0x41c);
        puVar17[0x1d] = uVar4;
        *(undefined1 *)(puVar17 + 0x1e) = 0;
        *puVar17 = &PTR_FUN_1005ed70;
        local_10 = FUN_100308ab((int)(puVar17 + 0x10));
        local_10 = local_10 & 0xff;
        uVar13 = 0;
        if (local_10 != 0) {
          for (; (local_10 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
          }
        }
        if (local_10 != 0) {
          uVar21 = 0xff000000;
          pbVar3 = (byte *)((int)&local_10 + ((int)uVar13 >> 3));
          *pbVar3 = *pbVar3 & ~('\x01' << (uVar13 & 7));
          while( true ) {
            lVar22 = __allshl((char)uVar13 * '\x03',0);
            uVar13 = (uint)lVar22 | uVar21;
            uVar21 = (uVar21 ^ uVar13) & 0xff000000 ^ uVar13;
            uVar13 = 0;
            if (local_10 != 0) {
              for (; (local_10 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
              }
            }
            if (local_10 == 0) break;
            pbVar3 = (byte *)((int)&local_10 + ((int)uVar13 >> 3));
            *pbVar3 = *pbVar3 & ~('\x01' << (uVar13 & 7));
          }
          local_10 = 0xffffffff;
          piVar14 = (int *)((int)local_18 + 0x1d94);
          this = local_18;
          local_14 = uVar21;
        }
        puVar17[2] = local_14;
        puVar17[3] = 0xffffffff;
        uVar13 = FUN_1001a1e9(piVar14,(int)&local_58);
        local_20 = CONCAT44(uVar13 * 0x40,(undefined4)local_20);
        local_10 = uVar13;
        if (uVar13 != piVar14[2]) {
          local_18 = (void *)(uVar13 * 0x40 + piVar14[1]);
          uVar21 = FUN_10019cdc(local_18,&local_58);
          if ((char)uVar21 != '\0') {
            *(undefined4 **)((int)local_18 + 0x38) = puVar17;
            uVar20 = local_c;
            goto LAB_1001dc84;
          }
        }
        iVar9 = piVar14[3];
        if (iVar9 == piVar14[2]) {
          if (iVar9 == 0) {
            local_14 = 0x10;
          }
          else {
            local_14 = iVar9 * 2;
          }
          iVar9 = FUN_1005c789(local_14 << 6);
          uVar13 = local_10;
          if (iVar9 != 0) {
            uVar13 = 0;
            if (piVar14[2] != 0) {
              do {
                iVar16 = uVar13 * 0x40;
                uVar13 = uVar13 + 1;
                puVar18 = (undefined4 *)(*(int *)((int)this + 0x1d98) + iVar16);
                uVar4 = puVar18[1];
                uVar5 = puVar18[2];
                uVar6 = puVar18[3];
                puVar1 = (undefined4 *)(iVar16 + iVar9);
                *puVar1 = *puVar18;
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                uVar4 = puVar18[5];
                uVar5 = puVar18[6];
                uVar6 = puVar18[7];
                puVar1 = (undefined4 *)(iVar16 + 0x10 + iVar9);
                *puVar1 = puVar18[4];
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                uVar4 = puVar18[9];
                uVar5 = puVar18[10];
                uVar6 = puVar18[0xb];
                puVar1 = (undefined4 *)(iVar16 + 0x20 + iVar9);
                *puVar1 = puVar18[8];
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
                uVar4 = puVar18[0xd];
                uVar5 = puVar18[0xe];
                uVar6 = puVar18[0xf];
                puVar1 = (undefined4 *)(iVar16 + 0x30 + iVar9);
                *puVar1 = puVar18[0xc];
                puVar1[1] = uVar4;
                puVar1[2] = uVar5;
                puVar1[3] = uVar6;
              } while (uVar13 < *(uint *)((int)this + 0x1d9c));
            }
            thunk_FUN_1005c76c((LPVOID)*piVar14);
            *piVar14 = iVar9;
            piVar14[1] = iVar9;
            piVar14[3] = local_14;
            uVar13 = local_10;
          }
        }
        uVar21 = piVar14[2];
        uVar20 = local_c;
        if (piVar14[3] != uVar21) {
          for (; uVar13 < uVar21; uVar21 = uVar21 - 1) {
            iVar9 = *(int *)((int)this + 0x1d98);
            iVar16 = uVar21 * 0x40;
            puVar18 = (undefined4 *)(iVar9 + -0x40 + iVar16);
            uVar4 = puVar18[1];
            uVar5 = puVar18[2];
            uVar6 = puVar18[3];
            puVar1 = (undefined4 *)(iVar9 + iVar16);
            *puVar1 = *puVar18;
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            puVar1 = (undefined4 *)(iVar9 + -0x30 + iVar16);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar18 = (undefined4 *)(iVar9 + 0x10 + iVar16);
            *puVar18 = *puVar1;
            puVar18[1] = uVar4;
            puVar18[2] = uVar5;
            puVar18[3] = uVar6;
            puVar1 = (undefined4 *)(iVar9 + -0x20 + iVar16);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar18 = (undefined4 *)(iVar9 + 0x20 + iVar16);
            *puVar18 = *puVar1;
            puVar18[1] = uVar4;
            puVar18[2] = uVar5;
            puVar18[3] = uVar6;
            puVar1 = (undefined4 *)(iVar9 + -0x10 + iVar16);
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar18 = (undefined4 *)(iVar9 + 0x30 + iVar16);
            *puVar18 = *puVar1;
            puVar18[1] = uVar4;
            puVar18[2] = uVar5;
            puVar18[3] = uVar6;
          }
          piVar14[2] = piVar14[2] + 1;
          puVar15 = (uint *)(piVar14[1] + local_20._4_4_);
          *puVar15 = local_58;
          puVar15[1] = uStack_54;
          puVar15[2] = uStack_50;
          puVar15[3] = uStack_4c;
          puVar15[4] = local_48;
          puVar15[5] = uStack_44;
          puVar15[6] = uStack_40;
          puVar15[7] = uStack_3c;
          puVar15[8] = local_38;
          puVar15[9] = uStack_34;
          puVar15[10] = uStack_30;
          puVar15[0xb] = uStack_2c;
          *(ulonglong *)(puVar15 + 0xc) = CONCAT44(iStack_24,local_28);
          *(undefined4 **)(piVar14[1] + 0x38 + local_20._4_4_) = puVar17;
        }
      }
      else {
        puVar17 = (undefined4 *)*puVar17;
      }
LAB_1001dc84:
      piVar14 = FUN_10027ea9(puVar17,(int *)&uStack_4c,_param_3,uVar20);
      iVar9 = *piVar14;
      local_48 = piVar14[1];
      uStack_44 = piVar14[2];
      uStack_40 = piVar14[3];
      uStack_3c = piVar14[4];
      _param_3 = piVar14[5];
      uVar2 = *(undefined8 *)(piVar14 + 6);
      uStack_2c = piVar14[8];
      iStack_24 = piVar14[10];
      uVar13 = piVar14[9];
    }
    if (iVar9 == 0) goto LAB_1001df59;
  }
  else {
LAB_1001df59:
    iVar9 = *(int *)((int)this + 0x1d60);
    if (*(char *)((int)this + 0x1905) == '\0') {
      uVar13 = 4;
      if (param_1 < 5) {
        uVar13 = param_1;
      }
      if ((*(int *)((int)this + 0x1dfc) == *(int *)(iVar9 + 0x90)) ||
         (*(int *)((int)this + 0x1dfc) == *(int *)(iVar9 + 0xa8))) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if (*(char *)((int)this + 0x1903) == '\0') {
        iVar19 = 0;
        if (bVar7) {
          iVar19 = 0x12;
        }
      }
      else {
        iVar19 = 9;
      }
      if (((*(char *)((int)this + 0x1919) == '\0') || (*(char *)((int)this + 0x1909) == '\0')) ||
         (uVar13 != 1)) {
        iVar16 = *(int *)(&DAT_1005e848 + uVar13 * 4) + iVar19;
      }
      else if (*(char *)((int)this + 0x1911) == '\0') {
        iVar16 = iVar19 + 6;
        if (*(char *)((int)this + 0x220) != '\x01') {
          iVar16 = iVar19 + 5;
        }
      }
      else {
        iVar16 = (*(char *)((int)this + 0x220) == '\x01') + 7 + iVar19;
      }
    }
    else {
      iVar16 = (*(int *)((int)this + 0x1f68) != 0) + 0x1b;
    }
    iVar9 = *(int *)(iVar9 + 4 + iVar16 * 4);
    iVar19 = iVar16 * 0x28;
    local_48 = *(uint *)(&DAT_1005d5f8 + iVar19);
    uStack_44 = *(uint *)(&UNK_1005d5fc + iVar19);
    uStack_40 = *(uint *)(&UNK_1005d600 + iVar19);
    uStack_3c = *(uint *)(&UNK_1005d604 + iVar19);
    _param_3 = *(uint *)(&DAT_1005d608 + iVar16 * 0x28);
    uVar2 = *(undefined8 *)(&DAT_1005d60c + iVar16 * 0x28);
    uStack_2c = *(uint *)(&DAT_1005d614 + iVar16 * 0x28);
    uVar13 = *(uint *)(&DAT_1005d618 + iVar16 * 0x28);
    iStack_24 = *(int *)(&DAT_1005d61c + iVar16 * 0x28);
  }
  *(undefined1 *)((int)this + 0x1d38) = 0;
  in_EAX = iStack_24;
  if (*(int *)((int)this + 0x1e00) != iVar9) {
    *(int *)((int)this + 0x1e00) = iVar9;
    *(undefined8 *)((int)this + 0x21b4) = uVar2;
    *(byte *)((int)this + 0x21d4) =
         *(byte *)((int)this + 0x21d4) | *(uint *)((int)this + 0x21c0) < uVar13;
    uVar21 = *(uint *)((int)this + 0x21b0);
    *(uint *)((int)this + 0x21a0) = local_48;
    *(uint *)((int)this + 0x21a4) = uStack_44;
    *(uint *)((int)this + 0x21a8) = uStack_40;
    *(uint *)((int)this + 0x21ac) = uStack_3c;
    *(uint *)((int)this + 0x21b0) = _param_3;
    *(byte *)((int)this + 0x21d6) = *(byte *)((int)this + 0x21d6) | uVar21 < _param_3;
    *(uint *)((int)this + 0x21bc) = uStack_2c;
    *(uint *)((int)this + 0x21c0) = uVar13;
    *(int *)((int)this + 0x21c4) = iStack_24;
    *(undefined1 *)((int)this + 0x21d1) = 1;
  }
LAB_1001e09e:
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

