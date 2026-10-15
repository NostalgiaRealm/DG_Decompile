/*
 * FUN_180093624 at 180093624
 * ulonglong __fastcall FUN_180093624(longlong param_1, undefined8 * param_2)
 * Address ranges: 180093624-1800937e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180093624(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 extraout_var;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  uVar4 = FUN_1800e06fc(*(longlong *)(param_1 + 0x50),*(longlong *)(param_1 + 0x110));
  if ((uVar4 == 0) || (uVar4 == *(ulonglong *)(param_1 + 0xf8))) {
    lVar1 = *(longlong *)(param_1 + 0xf0);
    local_43 = *(int *)(lVar1 + 0x18) == 1;
    local_38 = *(undefined4 *)(lVar1 + 0xde);
    local_3c = *(undefined4 *)(lVar1 + 0xda);
    local_44 = *(undefined1 *)(lVar1 + 0x26);
    local_4c = *(undefined4 *)(&DAT_180100388 + (longlong)*(int *)(lVar1 + 0xce) * 4);
    local_54 = 0;
    local_58 = *(undefined4 *)(&DAT_1801003a0 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
    local_88 = *(undefined8 *)(param_1 + 0xf8);
    local_80 = *(undefined4 *)(param_1 + 0x20);
    local_78 = *(undefined8 *)(param_1 + 0x110);
    local_70 = *(undefined4 *)(param_1 + 0x24);
    local_6c = *(undefined4 *)(param_1 + 0x28);
    local_68 = *(undefined4 *)(param_1 + 0x108);
    local_64 = *(undefined4 *)(param_1 + 0x10c);
    local_60 = *(undefined4 *)(param_1 + 0x128);
    local_5c = *(undefined4 *)(param_1 + 300);
    local_50 = *(undefined4 *)(param_1 + 0x130);
    local_48 = *(undefined4 *)(param_1 + 0x134);
    local_40 = 0;
    puVar5 = FUN_1800dfe90(*(LARGE_INTEGER *)(param_1 + 0x50),&local_88);
    *(undefined8 **)(param_1 + 0x118) = puVar5;
    uVar4 = 0;
    if (puVar5 != (undefined8 *)0x0) {
      bVar2 = FUN_18009355c(param_1,param_2);
      if (bVar2) {
        *(undefined8 *)(param_1 + 0x120) = 0;
        uVar6 = FUN_1800e055c(*(longlong **)(param_1 + 0x50),*(longlong *)(param_1 + 0x118),1);
        if ((char)uVar6 == '\0') {
          uVar3 = FUN_1800e05b4(*(longlong **)(param_1 + 0x50),*(longlong *)(param_1 + 0x110),0);
          uVar4 = CONCAT44(extraout_var,uVar3);
          goto LAB_180093780;
        }
      }
      lVar1 = *(longlong *)(param_1 + 0x118);
      if ((*(longlong *)(lVar1 + 0xda8) != 0) && (*(longlong **)(lVar1 + 0xd98) != (longlong *)0x0))
      {
        FUN_18008dd0c(param_1 + 0x60,*(longlong **)(lVar1 + 0xd88),*(longlong **)(lVar1 + 0xd98));
      }
      lVar1 = *(longlong *)(param_1 + 0x118);
      *(uint *)(param_1 + 0x24) = *(uint *)(lVar1 + 0x18) / *(uint *)(lVar1 + 0x20);
      uVar4 = (ulonglong)*(uint *)(lVar1 + 0x1c) / (ulonglong)*(uint *)(lVar1 + 0x24);
      *(int *)(param_1 + 0x28) = (int)uVar4;
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
LAB_180093780:
  *(undefined8 *)(param_1 + 0x110) = 0;
  return uVar4 & 0xffffffffffffff00;
}

