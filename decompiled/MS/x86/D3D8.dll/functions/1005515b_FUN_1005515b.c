/*
 * FUN_1005515b at 1005515b
 * undefined __thiscall FUN_1005515b(void * this, int * param_1, undefined4 param_2, int param_3, int param_4)
 * Address ranges: 1005515b-10055304
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005515b(void *this,int *param_1,undefined4 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  uint uVar6;
  
  iVar2 = param_3;
  FUN_1005a8ee(param_3);
  uVar4 = extraout_EDX;
  if (*(char *)(param_3 + 0x49e) != '\0') {
    uVar6 = 0;
    do {
      if ((*(char *)(*(int *)(param_3 + 0x10) + 0x10 + uVar6) != '\0') &&
         (*(char *)(*(int *)(param_3 + 0x10) + uVar6) == '\0')) {
        uVar3 = FUN_100536d9(param_1,param_3,0);
        uVar4 = extraout_EDX_00;
        if ((*(byte *)(*(int *)(param_3 + 0x10) + 0x10 + uVar6) & 3) != 0) {
          FUN_100a138c((int *)(param_3 + 0x18),param_1,0x36);
          uVar4 = extraout_EDX_01;
        }
        *(uint *)(param_3 + 0xec + uVar6 * 4) = uVar3;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
  }
  if (*(char *)(param_3 + 0x49f) != '\0') {
    uVar6 = 0;
    do {
      if ((*(char *)(*(int *)(param_3 + 0x10) + 0x10 + uVar6) != '\0') &&
         (*(char *)(*(int *)(param_3 + 0x10) + uVar6) == '0')) {
        uVar3 = FUN_10053a08(param_1,param_3,0);
        uVar4 = extraout_EDX_02;
        if ((*(byte *)(*(int *)(param_3 + 0x10) + 0x10 + uVar6) & 3) != 0) {
          FUN_100a138c((int *)(param_3 + 0x18),param_1,0x36);
          uVar4 = extraout_EDX_03;
        }
        *(uint *)(param_3 + 0xec + uVar6 * 4) = uVar3;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 0x10);
  }
  iVar5 = 0;
  uVar6 = 0;
  param_3 = 0;
  do {
    cVar1 = *(char *)(uVar6 + 0x10 + *(int *)(iVar2 + 0x10));
    uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar1);
    if ((cVar1 != '\0') && (cVar1 = *(char *)(uVar6 + *(int *)(iVar2 + 0x10)), cVar1 != -1)) {
      if (cVar1 == '\0') {
        cVar1 = *(char *)(iVar2 + 0x49e);
LAB_1005527b:
        if (cVar1 == '\0') goto LAB_1005527d;
      }
      else {
        if (cVar1 == '0') {
          cVar1 = *(char *)(iVar2 + 0x49f);
          goto LAB_1005527b;
        }
LAB_1005527d:
        FUN_100a1889(CONCAT31((int3)((uint)iVar5 >> 8),0xe4),uVar4);
        uVar4 = FUN_10053b71(param_1,iVar2,0);
        *(uint *)(iVar2 + 0xec + uVar6 * 4) = uVar4;
        iVar5 = param_3;
        uVar4 = extraout_EDX_04;
      }
      iVar5 = iVar5 + 1;
      param_3 = iVar5;
    }
    uVar6 = uVar6 + 1;
    if (0xf < uVar6) {
      uVar4 = 0;
      do {
        if (*(char *)(uVar4 + 0x20 + *(int *)(iVar2 + 0x10)) != '\0') {
          iVar5 = 1;
          uVar6 = FUN_100a05ed(iVar2 + 0x18,4,'\x01');
          *(uint *)(iVar2 + 300 + uVar4 * 4) = uVar6;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x20);
      FUN_1005a888(iVar2,iVar5,param_4);
      FUN_1005a819(iVar2);
      FUN_1005b07a(this,*(uint **)(iVar2 + 0xc0),iVar2,param_1);
      FUN_1005cc66(iVar2,param_1);
      return;
    }
  } while( true );
}

