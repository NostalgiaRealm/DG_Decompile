/*
 * FUN_1009950b at 1009950b
 * int __stdcall FUN_1009950b(int param_1, uint * param_2, undefined4 * param_3)
 * Address ranges: 1009950b-100996ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int FUN_1009950b(int param_1,uint *param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  char local_4a85;
  uint local_4a84;
  int local_4a80;
  uint local_4a7c;
  int local_4a78 [4763];
  undefined4 uStack_c;
  
  uStack_c = 0x1009951b;
  local_4a80 = -0x7789f794;
  if (param_2 == (uint *)0x0) {
    return -0x7789f794;
  }
  if (param_3 == (undefined4 *)0x0) {
    return -0x7789f794;
  }
  FUN_10003e40(&local_4a85,(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar5 = *param_2;
  if ((((uVar5 == 0xfffe0100) || (uVar5 == 0xfffe0101)) || (uVar5 == 0xfffe0200)) ||
     ((uVar5 == 0xfffe0201 || (uVar5 == 0xfffe0300)))) {
    FUN_100cfed0(local_4a78,0,0x4a70);
    local_4a84 = 0;
    local_4a7c = *(uint *)(*(int *)(param_1 + 0x50) + 0xc4);
    if (local_4a7c < uVar5) {
      uVar3 = 0x7fffffff;
    }
    else {
      uVar3 = *(uint *)(*(int *)(param_1 + 0x50) + 0x128);
    }
    uVar2 = uVar5 >> 8 & 0xff;
    if (uVar2 == 1) {
      uVar3 = FUN_100170f8((int *)param_2,(short)*(undefined4 *)(param_1 + -0x58e0),uVar3,local_4a78
                           ,(int *)&local_4a84);
      cVar1 = (char)uVar3;
    }
    else if (uVar2 == 2) {
      cVar1 = FUN_100a22d0(param_2,(short)*(undefined4 *)(param_1 + -0x58e0),local_4a78,
                           (int *)&local_4a84);
    }
    else {
      if (uVar2 != 3) goto LAB_100996d8;
      cVar1 = FUN_100a3368((int *)param_2,(short)*(undefined4 *)(param_1 + -0x58e0),uVar3,local_4a78
                           ,(int *)&local_4a84);
    }
    if (((cVar1 != '\0') && (uVar5 <= local_4a7c)) &&
       (puVar4 = (undefined4 *)FUN_100cfd55(0x1c), puVar4 != (undefined4 *)0x0)) {
      puVar4[3] = puVar4;
      puVar4[1] = 0;
      puVar4[4] = param_1 + -0x66b4;
      puVar4[2] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      *puVar4 = &PTR_FUN_100d725c;
      uVar5 = FUN_1009b688((void *)(param_1 + 100),(uint)puVar4,param_2,local_4a84,local_4a78);
      if (uVar5 != 0) {
        puVar4[5] = *(undefined4 *)(uVar5 + 0x85c);
        puVar4[6] = local_4a84;
        iVar6 = FUN_1009e858((int)puVar4,0x100d13b0,param_3);
        local_4a80 = iVar6;
        if (-1 < iVar6) {
          FUN_10003e89(&local_4a85);
          return iVar6;
        }
        puVar4[5] = 0;
        puVar4[6] = 0;
      }
      *puVar4 = &PTR_FUN_100d725c;
      FUN_100cfd6c(puVar4);
    }
  }
LAB_100996d8:
  FUN_10003e89(&local_4a85);
  return local_4a80;
}

