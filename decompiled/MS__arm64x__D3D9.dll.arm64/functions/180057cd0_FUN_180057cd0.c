/*
 * FUN_180057cd0 at 180057cd0
 * undefined FUN_180057cd0(void)
 * Address ranges: 180057cd0-180057f53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057cd0(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 < 10) {
LAB_180057d10:
    (**(code **)(*param_1 + 0x1d8))(param_1,0);
LAB_180057d24:
    uVar2 = param_2 - 10;
    if (uVar2 < 0x100) {
      lVar6 = *param_3;
      lVar5 = param_3[3];
      lVar4 = param_3[2];
      lVar3 = (ulonglong)uVar2 + 0x1d7;
      param_1[lVar3 * 8 + 0x17] = param_3[1];
      param_1[lVar3 * 8 + 0x16] = lVar6;
      param_1[lVar3 * 8 + 0x19] = lVar5;
      param_1[lVar3 * 8 + 0x18] = lVar4;
      lVar6 = param_3[4];
      lVar5 = param_3[7];
      lVar4 = param_3[6];
      param_1[lVar3 * 8 + 0x1b] = param_3[5];
      param_1[lVar3 * 8 + 0x1a] = lVar6;
      param_1[lVar3 * 8 + 0x1d] = lVar5;
      param_1[lVar3 * 8 + 0x1c] = lVar4;
      *(undefined1 *)((longlong)param_1 + 0xf692) = 1;
      *(uint *)((longlong)param_1 + (ulonglong)(uVar2 >> 5) * 4 + 0xf694) =
           1 << (ulonglong)(uVar2 & 0x1f) |
           *(uint *)((longlong)param_1 + (ulonglong)(uVar2 >> 5) * 4 + 0xf694);
      if (uVar2 != 0) {
        return;
      }
      lVar5 = *param_3;
      lVar4 = param_3[3];
      lVar3 = param_3[2];
      param_1[0xd45] = param_3[1];
      param_1[0xd44] = lVar5;
      param_1[0xd47] = lVar4;
      param_1[0xd46] = lVar3;
      lVar5 = param_3[4];
      lVar4 = param_3[7];
      lVar3 = param_3[6];
      param_1[0xd49] = param_3[5];
      param_1[0xd48] = lVar5;
      param_1[0xd4b] = lVar4;
      param_1[0xd4a] = lVar3;
      *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
      return;
    }
  }
  else if (9 < (int)param_2) {
    if ((int)param_2 < 0x10a) goto LAB_180057d10;
    goto LAB_180057d24;
  }
  switch(param_2) {
  case 0:
    lVar5 = *param_3;
    lVar4 = param_3[3];
    lVar3 = param_3[2];
    *(longlong *)((longlong)param_1 + 0x75ac) = param_3[1];
    *(longlong *)((longlong)param_1 + 0x75a4) = lVar5;
    *(longlong *)((longlong)param_1 + 0x75bc) = lVar4;
    *(longlong *)((longlong)param_1 + 0x75b4) = lVar3;
    lVar5 = param_3[4];
    lVar4 = param_3[7];
    lVar3 = param_3[6];
    *(longlong *)((longlong)param_1 + 0x75cc) = param_3[5];
    *(longlong *)((longlong)param_1 + 0x75c4) = lVar5;
    *(longlong *)((longlong)param_1 + 0x75dc) = lVar4;
    *(longlong *)((longlong)param_1 + 0x75d4) = lVar3;
    lVar5 = *param_3;
    lVar4 = param_3[3];
    lVar3 = param_3[2];
    param_1[0xd55] = param_3[1];
    param_1[0xd54] = lVar5;
    param_1[0xd57] = lVar4;
    param_1[0xd56] = lVar3;
    lVar5 = param_3[4];
    lVar4 = param_3[7];
    lVar3 = param_3[6];
    param_1[0xd59] = param_3[5];
    param_1[0xd58] = lVar5;
    param_1[0xd5b] = lVar4;
    param_1[0xd5a] = lVar3;
    FUN_18001eff8((longlong *)((longlong)param_1 + 0x75a4),param_1 + 0xd64,0);
    *(int *)(param_1 + 0xd5c) = (int)param_1[0xd64];
    *(int *)((longlong)param_1 + 0x6ae4) = (int)param_1[0xd66];
    *(int *)(param_1 + 0xd5d) = (int)param_1[0xd68];
    *(int *)((longlong)param_1 + 0x6aec) = (int)param_1[0xd6a];
    *(undefined4 *)(param_1 + 0xd5e) = *(undefined4 *)((longlong)param_1 + 0x6b24);
    *(undefined4 *)((longlong)param_1 + 0x6af4) = *(undefined4 *)((longlong)param_1 + 0x6b34);
    *(undefined4 *)(param_1 + 0xd5f) = *(undefined4 *)((longlong)param_1 + 0x6b44);
    *(undefined4 *)((longlong)param_1 + 0x6afc) = *(undefined4 *)((longlong)param_1 + 0x6b54);
    *(int *)(param_1 + 0xd60) = (int)param_1[0xd65];
    *(int *)((longlong)param_1 + 0x6b04) = (int)param_1[0xd67];
    *(int *)(param_1 + 0xd61) = (int)param_1[0xd69];
    *(int *)((longlong)param_1 + 0x6b0c) = (int)param_1[0xd6b];
    *(undefined4 *)(param_1 + 0xd62) = *(undefined4 *)((longlong)param_1 + 0x6b2c);
    *(undefined4 *)((longlong)param_1 + 0x6b14) = *(undefined4 *)((longlong)param_1 + 0x6b3c);
    *(undefined4 *)(param_1 + 0xd63) = *(undefined4 *)((longlong)param_1 + 0x6b4c);
    *(undefined4 *)((longlong)param_1 + 0x6b1c) = *(undefined4 *)((longlong)param_1 + 0x6b5c);
    *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
    *(undefined1 *)((longlong)param_1 + 0xf693) = 1;
    return;
  case 1:
    lVar5 = *param_3;
    lVar4 = param_3[3];
    lVar3 = param_3[2];
    *(longlong *)((longlong)param_1 + 0x75ec) = param_3[1];
    *(longlong *)((longlong)param_1 + 0x75e4) = lVar5;
    *(longlong *)((longlong)param_1 + 0x75fc) = lVar4;
    *(longlong *)((longlong)param_1 + 0x75f4) = lVar3;
    lVar5 = param_3[4];
    lVar4 = param_3[7];
    lVar3 = param_3[6];
    *(longlong *)((longlong)param_1 + 0x760c) = param_3[5];
    *(longlong *)((longlong)param_1 + 0x7604) = lVar5;
    *(longlong *)((longlong)param_1 + 0x761c) = lVar4;
    *(longlong *)((longlong)param_1 + 0x7614) = lVar3;
    lVar5 = *param_3;
    lVar4 = param_3[3];
    lVar3 = param_3[2];
    param_1[0xd6d] = param_3[1];
    param_1[0xd6c] = lVar5;
    param_1[0xd6f] = lVar4;
    param_1[0xd6e] = lVar3;
    lVar5 = param_3[4];
    lVar4 = param_3[7];
    lVar3 = param_3[6];
    param_1[0xd71] = param_3[5];
    param_1[0xd70] = lVar5;
    param_1[0xd73] = lVar4;
    param_1[0xd72] = lVar3;
    *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
    *(undefined1 *)((longlong)param_1 + 0xf693) = 1;
    return;
  case 2:
    lVar3 = 0x6c10;
    break;
  case 3:
    lVar3 = 0x6c50;
    break;
  case 4:
    lVar3 = 0x6c90;
    break;
  case 5:
    lVar3 = 0x6cd0;
    break;
  case 6:
    lVar3 = 0x6d10;
    break;
  case 7:
    lVar3 = 0x6d50;
    break;
  case 8:
    lVar3 = 0x6d90;
    break;
  case 9:
    lVar3 = 0x6dd0;
    break;
  default:
    goto switchD_180057db4_default;
  }
  lVar6 = *param_3;
  lVar5 = param_3[3];
  lVar4 = param_3[2];
  plVar1 = (longlong *)((longlong)param_1 + lVar3);
  plVar1[1] = param_3[1];
  *plVar1 = lVar6;
  plVar1[3] = lVar5;
  plVar1[2] = lVar4;
  lVar5 = param_3[4];
  lVar4 = param_3[7];
  lVar3 = param_3[6];
  plVar1[5] = param_3[5];
  plVar1[4] = lVar5;
  plVar1[7] = lVar4;
  plVar1[6] = lVar3;
  *(undefined1 *)((longlong)param_1 + 0xf691) = 1;
switchD_180057db4_default:
  return;
}

