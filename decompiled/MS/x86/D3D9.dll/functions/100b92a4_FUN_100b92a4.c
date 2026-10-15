/*
 * FUN_100b92a4 at 100b92a4
 * undefined __thiscall FUN_100b92a4(void * this, int param_1, int * param_2, undefined4 * param_3)
 * Address ranges: 100b92a4-100b9413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall FUN_100b92a4(void *this,int param_1,int *param_2,undefined4 *param_3)

{
  double dVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 local_403c [24];
  undefined1 local_4024 [12300];
  undefined1 local_1018 [4];
  undefined4 local_1014;
  undefined4 local_1010;
  undefined4 local_100c;
  undefined1 local_1008 [4096];
  undefined4 uStack_8;
  
  piVar2 = param_2;
  uStack_8 = 0x100b92b1;
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
  uVar3 = 0;
  *(undefined1 *)(param_1 + 0xd59) = 1;
  do {
    iVar5 = uVar3 * 0xc;
    dVar1 = (double)(&DAT_100d97a0)[-((int)uVar3 >> 0x1f)];
    *(int *)(param_1 + 0x38 + iVar5) = piVar2[uVar3 * 3];
    *(int *)(param_1 + 0x3c + iVar5) = piVar2[uVar3 * 3 + 1];
    fVar7 = (float)((double)(int)uVar3 + dVar1) / 255.0;
    *(int *)(param_1 + 0x40 + iVar5) = piVar2[uVar3 * 3 + 2];
    fVar6 = (float)piVar2[uVar3 * 3] - fVar7;
    if (fVar6 < 0.0) {
      fVar6 = -fVar6;
    }
    if (0.003921569 <= fVar6) {
LAB_100b9369:
      bVar4 = 0;
    }
    else {
      fVar6 = (float)piVar2[uVar3 * 3 + 1] - fVar7;
      if (fVar6 < 0.0) {
        fVar6 = -fVar6;
      }
      if (0.003921569 <= fVar6) goto LAB_100b9369;
      fVar7 = (float)piVar2[uVar3 * 3 + 2] - fVar7;
      if (fVar7 < 0.0) {
        fVar7 = -fVar7;
      }
      if (0.003921569 <= fVar7) goto LAB_100b9369;
      bVar4 = 1;
    }
    *(byte *)(param_1 + 0xd59) = *(byte *)(param_1 + 0xd59) & bVar4;
    uVar3 = uVar3 + 1;
    if (0xff < uVar3) {
      param_2 = (int *)0x0;
      (**(code **)(**(int **)(param_1 + 4) + 0x3c))(*(int **)(param_1 + 4),&param_2);
      if (param_2 != (int *)0x0) {
        if ((*(char *)(param_1 + 0xd58) == '\0') &&
           (iVar5 = (**(code **)(*param_2 + 0x34))(param_2,local_1018), iVar5 == 0)) {
          (**(code **)*param_3)(local_100c,local_1008,local_4024,piVar2,local_1010,local_1014);
          (**(code **)(*param_2 + 0x38))(param_2,local_403c);
        }
        (**(code **)(*param_2 + 8))(param_2);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x4a0));
      return;
    }
  } while( true );
}

