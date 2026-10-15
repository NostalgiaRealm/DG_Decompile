/*
 * FUN_1800c1520 at 1800c1520
 * undefined8 __fastcall FUN_1800c1520(longlong param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1800c1520-1800c169c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c1520(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  HDC hdc;
  HGDIOBJ pvVar4;
  uint7 uVar6;
  longlong lVar5;
  uint local_38 [2];
  longlong local_30;
  
  if ((((param_2 != (undefined8 *)0x0) && (*(int *)(param_1 + -0x2c) != 3)) &&
      ((*(int *)(param_1 + -0x2c) != 0 ||
       (((*(uint *)(param_1 + -0x30) & 0x200) != 0 ||
        ((*(uint *)(*(longlong *)(param_1 + -0x78) + 0x100) >> 10 & 1) != 0)))))) &&
     (lVar1 = *(longlong *)(param_1 + -0x78), (*(uint *)(lVar1 + 0x100) >> 0xb & 1) == 0)) {
    uVar3 = *(uint *)(param_1 + -0x38);
    uVar6 = (uint7)((ulonglong)param_2 >> 8);
    if ((uVar3 - 0x16 < 3) || (uVar3 == 0x14)) {
      lVar5 = CONCAT71(uVar6,1);
    }
    else {
      lVar5 = (ulonglong)uVar6 << 8;
    }
    if ((uVar3 < 0x21) && ((0x102200000U >> ((ulonglong)uVar3 & 0x3f) & 1) != 0)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((((char)lVar5 != '\0') || (bVar2)) &&
       (bVar2 = FUN_180032f74(lVar1,lVar5,lVar1,param_4), bVar2)) {
      lVar1 = *(longlong *)(param_1 + -0x78);
      hdc = CreateCompatibleDC((HDC)0x0);
      *(HDC *)(lVar1 + 0xc0) = hdc;
      if (hdc != (HDC)0x0) {
        pvVar4 = SelectObject(hdc,*(HGDIOBJ *)(lVar1 + 0xb8));
        *(HGDIOBJ *)(lVar1 + 200) = pvVar4;
        if (((*(int *)(param_1 + -0x18) == 0) || ((*(uint *)(param_1 + -0x30) & 0x400) == 0)) &&
           (uVar3 = FUN_180015724(param_1 + -0x80,local_38,(RECT *)0x0,0,'\x01'), -1 < (int)uVar3))
        {
          lVar5 = *(longlong *)(param_1 + -0x78);
          *(longlong *)(lVar5 + 0xd0) = local_30;
          *(uint *)(lVar5 + 0xd8) = local_38[0];
          *param_2 = *(undefined8 *)(lVar1 + 0xc0);
          if (local_30 != 0) {
            FUN_1800330e4(*(longlong *)(param_1 + -0x78));
          }
          return 0;
        }
        SelectObject(*(HDC *)(lVar1 + 0xc0),*(HGDIOBJ *)(lVar1 + 200));
        DeleteDC(*(HDC *)(lVar1 + 0xc0));
        *(undefined8 *)(lVar1 + 0xc0) = 0;
      }
    }
  }
  return 0x8876086c;
}

