/*
 * FUN_10063d80 at 10063d80
 * undefined FUN_10063d80(void)
 * Address ranges: 10063d80-10064017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10063d80(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_148 [264];
  
  iVar7 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar7 == 0) {
    FUN_1004bc70(0);
  }
  iVar7 = -0x7ff8ffa9;
  if ((((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) || (*param_2 != 0x5c)) ||
     ((param_2[1] & 0xffff8000U) != 0)) goto LAB_10063fe0;
  iVar3 = *param_3;
  iVar7 = -0x7789ff9c;
  if (iVar3 == 0x16c) {
    cVar6 = FUN_1004ffe0(param_2);
LAB_10063e38:
    if (cVar6 == '\0') goto LAB_10063fe0;
  }
  else {
    if (iVar3 == 0x1ac) {
      cVar6 = FUN_10050120(param_2);
      goto LAB_10063e38;
    }
    if (iVar3 == 0x20c) {
      cVar6 = FUN_10050260(param_2);
      goto LAB_10063e38;
    }
    iVar7 = -0x7ff8ffa9;
  }
  if (iVar7 != -0x7ff8ffa9) {
    iVar7 = -0x7789ff01;
    FUN_10050420(param_3,0);
    FUN_10050420(param_3,1);
    uVar10 = _DAT_1009c5e0;
    piVar1 = param_3 + 1;
    *(undefined8 *)(param_3 + 3) = uRam1009c5e8;
    *(undefined8 *)piVar1 = uVar10;
    cVar6 = '\0';
    bVar5 = false;
    uVar9 = 0;
    do {
      puVar4 = (undefined8 *)((&DAT_100a4c30)[*(int *)(param_1 + 0x98)] + uVar9 * 0x298);
      iVar3 = *param_3;
      if (iVar3 == 0x16c) {
        FUN_1004f990(puVar4,auStack_148);
      }
      else if (iVar3 == 0x1ac) {
        FUN_1004fa60(puVar4,auStack_148);
      }
      else if (iVar3 == 0x20c) {
        FUN_1004fbb0(puVar4,auStack_148);
      }
      pcVar2 = (char *)(puVar4 + 4);
      uVar8 = FUN_10062950(param_1,param_2,auStack_148,puVar4,*pcVar2);
      if ((uVar8 & 1) != 0) {
        iVar7 = 0;
        if (((uint)param_2[1] >> 2 & 1) != 0) {
          FUN_100503b0(param_3,auStack_148,*pcVar2);
          bVar5 = *pcVar2 == '\0';
LAB_10063fcc:
          FUN_10050420(param_3,bVar5);
          uVar10 = *puVar4;
          *(undefined8 *)(param_3 + 3) = puVar4[1];
          *(undefined8 *)piVar1 = uVar10;
          break;
        }
        if (bVar5) {
          if ((cVar6 != '\0') && (*pcVar2 == '\0')) {
            FUN_100503b0(param_3,auStack_148,0);
            bVar5 = true;
            goto LAB_10063fcc;
          }
        }
        else {
          FUN_100503b0(param_3,auStack_148,*pcVar2);
          FUN_10050420(param_3,*pcVar2 == '\0');
          bVar5 = true;
          uVar10 = *puVar4;
          *(undefined8 *)(param_3 + 3) = puVar4[1];
          *(undefined8 *)piVar1 = uVar10;
          cVar6 = *pcVar2;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 7);
  }
LAB_10063fe0:
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return iVar7;
}

