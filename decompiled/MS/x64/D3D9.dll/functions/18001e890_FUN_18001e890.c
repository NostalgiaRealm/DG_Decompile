/*
 * FUN_18001e890 at 18001e890
 * undefined __fastcall FUN_18001e890(undefined8 param_1, longlong param_2, longlong param_3, undefined1 * param_4)
 * Address ranges: 18001e890-18001e94c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e890(undefined8 param_1,longlong param_2,longlong param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  FUN_1800fbea0(param_4,0,0x110);
  uVar6 = 0;
  if (*(int *)(param_2 + 8) != 0) {
    do {
      bVar2 = *(byte *)(param_2 + 0x214 + uVar6);
      uVar4 = (ulonglong)bVar2;
      uVar5 = (uint)bVar2;
      if (bVar2 < 9) {
        if (((bVar2 == 8) || (bVar2 == 0)) || ((uVar5 == 1 || (uVar5 == 3)))) goto LAB_18001e8f0;
        iVar3 = uVar5 - 5;
LAB_18001e8e4:
        if (((iVar3 == 0) || (iVar3 == 1)) || (iVar3 == 2)) goto LAB_18001e8f0;
      }
      else {
        if (((uVar5 != 9) && (uVar5 != 10)) && (uVar5 != 0xb)) {
          iVar3 = uVar5 - 0xc;
          goto LAB_18001e8e4;
        }
LAB_18001e8f0:
        lVar1 = param_2 + uVar4 * 8;
        *(ulonglong *)(param_4 + uVar4 * 0x10) = param_3 + (ulonglong)*(byte *)(lVar1 + 0x17) * 4;
        param_4[uVar4 * 0x10 + 0xc] = *(undefined1 *)(lVar1 + 0x18);
        *(undefined4 *)(param_4 + uVar4 * 0x10 + 8) = *(undefined4 *)(param_2 + 0xc);
        param_4[uVar4 * 0x10 + 0xd] = *(undefined1 *)(lVar1 + 0x15);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < *(uint *)(param_2 + 8));
  }
  return;
}

