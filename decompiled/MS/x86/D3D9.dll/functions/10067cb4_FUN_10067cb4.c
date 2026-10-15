/*
 * FUN_10067cb4 at 10067cb4
 * undefined __thiscall FUN_10067cb4(void * this, int * param_1, int * param_2, int param_3, int param_4)
 * Address ranges: 10067cb4-10067f76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10067cb4(void *this,int *param_1,int *param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint uVar5;
  uint local_c;
  
  iVar2 = param_3;
  FUN_10070307(param_3);
  iVar3 = *(int *)(param_3 + 0x10);
  param_3 = -1;
  if (*(char *)(iVar3 + 0x4884) != '\0') {
    param_3 = *(int *)(iVar2 + 0x60);
    *(int *)(iVar2 + 0x60) = param_3 + 1;
    *(undefined4 *)(iVar2 + 0x50 + param_3 * 4) = 0x10;
    iVar3 = *(int *)(iVar2 + 0x10);
  }
  uVar4 = extraout_EDX;
  if (*(char *)(iVar2 + 0x52e) != '\0') {
    uVar5 = 0;
    do {
      if ((*(char *)(iVar3 + 0x10 + uVar5) != '\0') && (*(char *)(iVar3 + uVar5) == '\0')) {
        uVar4 = FUN_100661dc(param_1,iVar2,0);
        if ((*(byte *)(*(int *)(iVar2 + 0x10) + 0x10 + uVar5) & 3) != 0) {
          FUN_100c3be1((int *)(iVar2 + 0x18),param_1,0x36);
        }
        *(uint *)(iVar2 + 0xec + uVar5 * 4) = uVar4;
        if (param_3 != -1) {
          *(uint *)(iVar2 + 0x228 + uVar5 * 4) = param_3 << 0xe | uVar5 | 0x420300;
          FUN_100c3be1((int *)(iVar2 + 0x18),param_1,0x36);
          uVar4 = extraout_EDX_00;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
  }
  if (*(char *)(iVar2 + 0x52f) != '\0') {
    uVar5 = 0;
    do {
      if ((*(char *)(*(int *)(iVar2 + 0x10) + 0x10 + uVar5) != '\0') &&
         (*(char *)(*(int *)(iVar2 + 0x10) + uVar5) == '0')) {
        uVar4 = FUN_1006650b(param_1,iVar2,0);
        if ((*(byte *)(*(int *)(iVar2 + 0x10) + 0x10 + uVar5) & 3) != 0) {
          FUN_100c3be1((int *)(iVar2 + 0x18),param_1,0x36);
        }
        *(uint *)(iVar2 + 0xec + uVar5 * 4) = uVar4;
        if (param_3 != -1) {
          *(uint *)(iVar2 + 0x228 + uVar5 * 4) = param_3 << 0xe | uVar5 | 0x420300;
          FUN_100c3be1((int *)(iVar2 + 0x18),param_1,0x36);
          uVar4 = extraout_EDX_01;
        }
        break;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x10);
  }
  local_c = 0;
  do {
    iVar3 = *(int *)(iVar2 + 0x10);
    cVar1 = *(char *)(local_c + 0x10 + iVar3);
    uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar1);
    if (cVar1 != '\0') {
      cVar1 = *(char *)(local_c + iVar3);
      if (cVar1 != -1) {
        if (cVar1 == '\0') {
          cVar1 = *(char *)(iVar2 + 0x52e);
LAB_10067e83:
          if (cVar1 != '\0') goto LAB_10067ee7;
        }
        else if (cVar1 == '0') {
          cVar1 = *(char *)(iVar2 + 0x52f);
          goto LAB_10067e83;
        }
        FUN_100c40de(CONCAT31((int3)((uint)iVar3 >> 8),0xe4),uVar4);
        uVar4 = FUN_10066674(param_1,iVar2,0);
        *(uint *)(iVar2 + 0xec + local_c * 4) = uVar4;
        if (param_3 != -1) {
          *(uint *)(iVar2 + 0x228 + local_c * 4) = param_3 << 0xe | local_c | 0x420300;
          FUN_100c3be1((int *)(iVar2 + 0x18),param_1,0x36);
          uVar4 = extraout_EDX_02;
        }
      }
    }
LAB_10067ee7:
    local_c = local_c + 1;
    if (0xf < local_c) {
      uVar4 = 0;
      do {
        if (*(char *)(uVar4 + 0x20 + *(int *)(iVar2 + 0x10)) != '\0') {
          uVar5 = FUN_100c2e34(iVar2 + 0x18,4,'\x01');
          *(uint *)(iVar2 + 300 + uVar4 * 4) = uVar5;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x20);
      FUN_10070221(iVar2,param_1,param_4);
      cVar1 = *(char *)(*(int *)(iVar2 + 0x10) + 0x4a6c);
      if ((cVar1 == '\x02') || (cVar1 == '\x03')) {
        FUN_100693f5(iVar2);
      }
      FUN_10070183(iVar2);
      FUN_10070c00(this,*(uint **)(iVar2 + 0xc0),iVar2,param_1);
      FUN_1006b98e(this,*(int *)(iVar2 + 0xc0),iVar2,param_2);
      FUN_1007281c(iVar2,param_1);
      return;
    }
  } while( true );
}

