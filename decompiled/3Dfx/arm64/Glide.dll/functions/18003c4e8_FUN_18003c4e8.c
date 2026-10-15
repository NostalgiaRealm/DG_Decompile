/*
 * FUN_18003c4e8 at 18003c4e8
 * undefined __cdecl FUN_18003c4e8(ushort * param_1, short param_2, ushort param_3)
 * Address ranges: 18003c4e8-18003c70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003c4e8(ushort *param_1,short param_2,ushort param_3)

{
  ulonglong uVar1;
  ushort uVar2;
  ushort uVar3;
  longlong extraout_x11;
  
  if (((*param_1 & 0xdf0) == 0) ||
     ((uVar2 = param_1[1], (uVar2 & 0xdf0) == 0 && ((param_1[2] & 0xdf0) == 0))))
  goto LAB_18003c578;
  uVar3 = param_1[2];
  if ((uVar2 & 0xf0ff) == (uVar3 & 0xf0ff)) {
    if ((uVar2 & 0xf00) == 0x200) {
      if ((uVar3 & 0xf00) == 0) {
LAB_18003c578:
        param_1[2] = 0;
        uVar3 = 0;
        param_1[0] = 0;
        param_1[1] = 0;
      }
    }
    else if (((uVar2 & 0xf00) == 0) && ((uVar3 & 0xf00) == 0x200)) goto LAB_18003c578;
  }
  uVar2 = *param_1;
  if (((uVar2 & 0xff0) == 0x100) && (((uVar3 & 0xff0) == 0 || ((uVar3 & 0xff0) == 0x200)))) {
    if ((param_1[3] & 0xdf0) == 0) {
      uVar2 = param_1[1];
      param_1[1] = 0;
      *param_1 = 0;
      param_1[3] = uVar2;
      uVar2 = 0;
      goto LAB_18003c5d4;
    }
LAB_18003c660:
    if (((param_1[1] & 0xdf0) != 0) || ((param_1[3] & 0xdf0) != 0)) goto LAB_18003c5d4;
    uVar2 = param_1[2];
    param_1[2] = 0;
    *param_1 = 0;
    uVar3 = 0;
    param_1[3] = uVar2;
    uVar2 = 0;
  }
  else {
    if ((uVar2 & 0xff0) == 0x100) goto LAB_18003c660;
LAB_18003c5d4:
    if ((((uVar2 & 0xff0) != 0) && ((uVar2 & 0xff0) != 0x200)) &&
       ((((param_1[1] & 0xff0) == 0x100 && (uVar3 = param_1[2], (uVar3 & 0xdf0) == 0)) ||
        (((uVar3 & 0xff0) == 0x100 && ((param_1[1] & 0xdf0) == 0)))))) {
      param_1[2] = 0;
      if ((param_1[3] & 0xdf0) != 0) {
        param_1[1] = *param_1;
        *param_1 = 0x100;
        return;
      }
      param_1[3] = *param_1;
      uVar3 = 0;
      param_1[1] = 0;
      *param_1 = 0;
      goto LAB_18003c6b0;
    }
  }
  if ((uVar2 & 0xdf0) != 0) {
    return;
  }
LAB_18003c6b0:
  if (((((param_1[1] & 0xdf0) == 0) && ((uVar3 & 0xdf0) == 0)) && ((char)param_1[4] == '\0')) &&
     (uVar1 = FUN_18003bf38((ulonglong)param_1[3],param_2), ((uint)uVar1 & 0xffff) != 0xf0)) {
    *(ushort *)(extraout_x11 + 10) = (ushort)uVar1 | param_3;
  }
  return;
}

